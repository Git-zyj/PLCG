#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6401108303801619613ULL;
unsigned long long int var_1 = 16203293815985896099ULL;
unsigned short var_3 = (unsigned short)41827;
unsigned int var_4 = 2675943359U;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)72;
unsigned int var_8 = 719645919U;
int var_9 = -1440480297;
short var_10 = (short)23875;
long long int var_11 = -1379603101188160438LL;
short var_13 = (short)2520;
int zero = 0;
long long int var_14 = -6463256529243099302LL;
unsigned long long int var_15 = 4932909258746610242ULL;
long long int var_16 = -6066791928959820674LL;
short var_17 = (short)-4194;
unsigned short var_18 = (unsigned short)42238;
unsigned long long int var_19 = 15444663321012023432ULL;
int var_20 = 197075241;
int var_21 = 827606518;
long long int arr_0 [17] ;
unsigned char arr_2 [17] ;
unsigned short arr_4 [23] ;
unsigned char arr_5 [23] ;
_Bool arr_6 [23] ;
int arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1952164701079185115LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)57791;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 1663457824;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
