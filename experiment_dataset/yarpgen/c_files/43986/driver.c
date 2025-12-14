#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15341938167391578696ULL;
unsigned int var_7 = 1943936591U;
short var_8 = (short)19617;
unsigned long long int var_9 = 10045230531734664027ULL;
long long int var_14 = 7338325076397215015LL;
int zero = 0;
unsigned long long int var_18 = 5182901832422298607ULL;
int var_19 = 852556812;
unsigned int var_20 = 2451258160U;
long long int var_21 = 810062425693494508LL;
short var_22 = (short)-1997;
short var_23 = (short)-7557;
long long int var_24 = -259432491003893884LL;
short var_25 = (short)17516;
int var_26 = -1840749442;
unsigned long long int var_27 = 12190937487889773729ULL;
unsigned char arr_0 [25] ;
int arr_5 [12] ;
int arr_6 [12] [12] ;
signed char arr_7 [12] ;
signed char arr_2 [25] ;
int arr_3 [25] ;
unsigned short arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = -2027862241;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = -1895487068;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)29 : (signed char)-31;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1176548706 : 137441898;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned short)22583;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
