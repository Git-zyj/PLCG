#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)137;
unsigned int var_3 = 3201022175U;
int var_4 = -1366585024;
_Bool var_5 = (_Bool)1;
short var_7 = (short)2434;
int var_9 = 272559965;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 826144789U;
int zero = 0;
int var_13 = 451267690;
unsigned short var_14 = (unsigned short)48263;
short var_15 = (short)-15295;
unsigned short var_16 = (unsigned short)41958;
long long int var_17 = 4387163926346782948LL;
unsigned short var_18 = (unsigned short)44729;
int var_19 = 921063633;
_Bool var_20 = (_Bool)0;
int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned short arr_2 [20] ;
unsigned int arr_3 [20] [20] [20] ;
int arr_6 [20] ;
_Bool arr_8 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 462805591;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 17682444564025196079ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)5820;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1677490179U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 664371292 : -166056827;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
