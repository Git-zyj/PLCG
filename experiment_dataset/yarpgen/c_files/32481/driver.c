#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-70;
unsigned char var_6 = (unsigned char)59;
signed char var_8 = (signed char)-79;
unsigned long long int var_9 = 12954485817555022569ULL;
int var_14 = -101609660;
int zero = 0;
unsigned char var_17 = (unsigned char)93;
long long int var_18 = -8208004296066677314LL;
_Bool var_19 = (_Bool)0;
int var_20 = 925801484;
long long int arr_0 [13] ;
int arr_1 [13] ;
unsigned char arr_2 [13] ;
unsigned char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2442543122335468419LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -31142971;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)187 : (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)151 : (unsigned char)235;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
