#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2052115887;
unsigned char var_1 = (unsigned char)106;
unsigned char var_5 = (unsigned char)48;
unsigned short var_13 = (unsigned short)34420;
unsigned int var_15 = 3683985551U;
unsigned long long int var_16 = 14046557292547134515ULL;
int zero = 0;
short var_18 = (short)4082;
unsigned int var_19 = 3129087334U;
unsigned short var_20 = (unsigned short)45982;
unsigned int var_21 = 2073320739U;
signed char var_22 = (signed char)96;
unsigned char arr_0 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)84;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
