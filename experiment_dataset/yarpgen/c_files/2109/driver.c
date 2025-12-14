#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31521;
signed char var_7 = (signed char)93;
signed char var_9 = (signed char)57;
unsigned int var_10 = 328166021U;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-29579;
unsigned long long int var_15 = 16314291584598032357ULL;
unsigned char var_16 = (unsigned char)104;
unsigned char var_17 = (unsigned char)222;
unsigned int var_18 = 1282118035U;
short var_19 = (short)5156;
_Bool var_20 = (_Bool)1;
signed char arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned char arr_2 [11] ;
short arr_3 [12] [12] ;
short arr_7 [12] ;
long long int arr_10 [12] [12] [12] ;
signed char arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)14520;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)18913;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -3016368010484632478LL : -1849685894856814394LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)40 : (signed char)33;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
