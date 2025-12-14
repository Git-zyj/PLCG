#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4165;
short var_2 = (short)25496;
unsigned long long int var_3 = 8390561283436042831ULL;
unsigned char var_6 = (unsigned char)84;
short var_8 = (short)-7179;
short var_9 = (short)19554;
int zero = 0;
unsigned char var_11 = (unsigned char)12;
signed char var_12 = (signed char)-39;
unsigned int var_13 = 1369687389U;
unsigned long long int var_14 = 6198344803434988787ULL;
unsigned int var_15 = 1590207537U;
signed char var_16 = (signed char)-75;
short var_17 = (short)28263;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)124;
unsigned short var_20 = (unsigned short)27469;
unsigned long long int var_21 = 17809911382059482503ULL;
signed char arr_0 [19] ;
int arr_2 [19] [19] ;
signed char arr_4 [25] ;
long long int arr_5 [25] ;
long long int arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 145292064;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -5145343614264210330LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 1908495012197849344LL;
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
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
