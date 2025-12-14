#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3984378898U;
int var_1 = 1593324913;
unsigned short var_2 = (unsigned short)39730;
int var_9 = -699719585;
signed char var_10 = (signed char)-86;
unsigned short var_11 = (unsigned short)29322;
unsigned char var_12 = (unsigned char)209;
signed char var_13 = (signed char)22;
long long int var_14 = 6664943338647382327LL;
signed char var_17 = (signed char)82;
int zero = 0;
short var_19 = (short)-14918;
unsigned long long int var_20 = 14020768974037314197ULL;
short var_21 = (short)-15939;
unsigned char var_22 = (unsigned char)159;
unsigned short var_23 = (unsigned short)60411;
unsigned int arr_1 [21] [21] ;
unsigned short arr_3 [21] [21] [21] ;
long long int arr_5 [21] [21] [21] [21] ;
unsigned long long int arr_7 [21] [21] [21] [21] ;
long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 2437085118U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)63182;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -610353337185136158LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 11399520786660825005ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 2664090944330067257LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
