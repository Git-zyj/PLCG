#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
unsigned char var_2 = (unsigned char)221;
int var_5 = -677853075;
int var_8 = 1694620747;
unsigned long long int var_11 = 4128175392705161516ULL;
unsigned char var_13 = (unsigned char)103;
unsigned char var_14 = (unsigned char)102;
int var_15 = 2136179719;
int var_16 = -1128392040;
int zero = 0;
int var_20 = 1101031045;
int var_21 = 97256449;
unsigned short var_22 = (unsigned short)9866;
int var_23 = 1845639166;
short arr_0 [23] ;
unsigned char arr_1 [23] ;
unsigned long long int arr_2 [23] ;
long long int arr_5 [23] ;
unsigned short arr_6 [23] ;
unsigned char arr_7 [23] ;
short arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)15262;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 337483666137797359ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -6823164593780871623LL : -5199881878800734987LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36353 : (unsigned short)24463;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)138 : (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)20542 : (short)-9962;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
