#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28255;
unsigned short var_1 = (unsigned short)22340;
long long int var_2 = 4588216245303629679LL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)48809;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)1;
signed char var_11 = (signed char)60;
short var_12 = (short)14836;
unsigned long long int var_14 = 2589426419057356635ULL;
unsigned char var_15 = (unsigned char)85;
unsigned long long int var_16 = 11445603310534574114ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)148;
unsigned int var_18 = 1658164324U;
unsigned char var_19 = (unsigned char)209;
unsigned short var_20 = (unsigned short)48862;
unsigned char var_21 = (unsigned char)246;
unsigned long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 11788066736658084046ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
