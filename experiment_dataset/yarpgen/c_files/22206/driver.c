#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23670;
unsigned short var_1 = (unsigned short)26234;
short var_5 = (short)16625;
unsigned long long int var_6 = 3494368066849640631ULL;
unsigned long long int var_8 = 4736550457897505654ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-82;
signed char var_12 = (signed char)-75;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-110;
unsigned char var_15 = (unsigned char)221;
long long int var_16 = -2027336288579220698LL;
int var_17 = -2142176478;
unsigned int var_18 = 1552961377U;
unsigned short var_19 = (unsigned short)8214;
unsigned long long int var_20 = 4366225765097420393ULL;
unsigned long long int arr_1 [22] ;
unsigned long long int arr_2 [22] ;
unsigned short arr_8 [22] [22] [22] [22] [22] [22] ;
unsigned char arr_9 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 11511330155487902618ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 12860316524688001098ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned short)34805 : (unsigned short)9195;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)178 : (unsigned char)3;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
