#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21863;
unsigned int var_1 = 1907376318U;
signed char var_3 = (signed char)-104;
unsigned int var_4 = 655525952U;
unsigned long long int var_5 = 2600493338736076356ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 16668979283327996082ULL;
unsigned short var_10 = (unsigned short)33661;
long long int var_11 = 7959151464029713730LL;
int zero = 0;
short var_15 = (short)-6274;
unsigned short var_16 = (unsigned short)42533;
unsigned int var_17 = 320885109U;
long long int var_18 = -102155526287708112LL;
long long int var_19 = -3664798855239697981LL;
unsigned int arr_1 [14] ;
unsigned int arr_5 [14] [14] ;
_Bool arr_8 [14] [14] [14] [14] ;
unsigned long long int arr_10 [14] [14] ;
signed char arr_11 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2126657118U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 2651619561U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 13114907627753777942ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-8;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
