#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1155797663U;
unsigned int var_2 = 3936355965U;
int var_9 = -1325016310;
long long int var_14 = -6858135080010368653LL;
unsigned short var_15 = (unsigned short)32099;
int zero = 0;
int var_19 = 1955610141;
unsigned int var_20 = 531949838U;
long long int var_21 = -185652507031033597LL;
long long int var_22 = -7091129945213316879LL;
unsigned short var_23 = (unsigned short)28078;
unsigned short arr_1 [23] ;
int arr_3 [23] ;
unsigned short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)34228;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -1660395603;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23276 : (unsigned short)33339;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
