#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13189;
unsigned short var_3 = (unsigned short)53162;
unsigned char var_11 = (unsigned char)129;
unsigned char var_12 = (unsigned char)59;
unsigned long long int var_15 = 6053173372506960921ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)38532;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2171443457U;
unsigned char var_20 = (unsigned char)155;
unsigned char var_21 = (unsigned char)229;
_Bool var_22 = (_Bool)1;
int var_23 = 1931603036;
short var_24 = (short)-4958;
signed char var_25 = (signed char)-5;
_Bool var_26 = (_Bool)1;
unsigned char arr_0 [13] ;
unsigned char arr_1 [13] ;
int arr_2 [13] ;
unsigned int arr_3 [13] [13] ;
long long int arr_6 [23] ;
long long int arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -1008450277;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 2341106582U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 8239653055054609316LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = -1190196547296804107LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
