#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1535192783;
int var_1 = 530116277;
short var_3 = (short)-20135;
unsigned char var_5 = (unsigned char)218;
unsigned int var_8 = 3782204091U;
unsigned char var_10 = (unsigned char)183;
int var_12 = 500353059;
int zero = 0;
long long int var_14 = -172601584785458039LL;
unsigned char var_15 = (unsigned char)47;
int var_16 = -859725630;
long long int arr_0 [14] ;
short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -4355353528244614406LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)16776 : (short)-23721;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
