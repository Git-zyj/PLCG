#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6609104058431411277ULL;
int var_4 = 132853693;
unsigned char var_5 = (unsigned char)133;
short var_7 = (short)12658;
long long int var_8 = -2352394960075312717LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 13262118646193440354ULL;
unsigned char var_14 = (unsigned char)155;
short var_17 = (short)-11869;
unsigned short var_18 = (unsigned short)20542;
unsigned short var_19 = (unsigned short)523;
int zero = 0;
unsigned short var_20 = (unsigned short)7311;
unsigned char var_21 = (unsigned char)49;
unsigned short var_22 = (unsigned short)22453;
int var_23 = -1943357577;
unsigned int var_24 = 1039356647U;
_Bool var_25 = (_Bool)0;
unsigned char arr_0 [12] [12] ;
int arr_1 [12] ;
_Bool arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -711433599;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
