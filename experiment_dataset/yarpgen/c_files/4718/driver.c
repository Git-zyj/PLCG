#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31802;
long long int var_2 = 6280957220579125676LL;
short var_3 = (short)19262;
long long int var_4 = -4755691117101552697LL;
unsigned char var_6 = (unsigned char)103;
int var_8 = -1004056293;
signed char var_9 = (signed char)-71;
int zero = 0;
unsigned int var_10 = 873610852U;
unsigned int var_11 = 2019097422U;
int var_12 = 552704671;
unsigned char var_13 = (unsigned char)136;
long long int var_14 = 5206258267599561586LL;
unsigned int var_15 = 2666039774U;
unsigned int var_16 = 3361836175U;
short var_17 = (short)23600;
unsigned short var_18 = (unsigned short)9745;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-83;
_Bool arr_0 [15] [15] ;
long long int arr_3 [15] ;
long long int arr_4 [15] ;
unsigned int arr_7 [15] [15] [15] [15] [15] [15] ;
short arr_8 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -378096112760865245LL : 2548930209698931729LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 517599060310685460LL : 1781353503151587311LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3558694689U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-12699;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
