#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3584484142U;
short var_1 = (short)-32334;
unsigned long long int var_2 = 5943688802642910570ULL;
unsigned char var_3 = (unsigned char)23;
unsigned short var_4 = (unsigned short)5774;
unsigned short var_5 = (unsigned short)23267;
unsigned short var_7 = (unsigned short)4028;
short var_8 = (short)-5299;
unsigned short var_10 = (unsigned short)4363;
int zero = 0;
short var_11 = (short)4532;
unsigned int var_12 = 3813617681U;
int var_13 = 1120789858;
long long int var_14 = 3277071152068076386LL;
unsigned long long int var_15 = 1316314369979540172ULL;
_Bool arr_1 [17] ;
unsigned int arr_3 [17] [17] [17] ;
unsigned short arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 915638912U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)36162;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
