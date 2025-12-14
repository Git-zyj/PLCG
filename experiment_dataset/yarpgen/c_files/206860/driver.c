#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13132581441819129923ULL;
int var_2 = -1952310251;
unsigned short var_3 = (unsigned short)52098;
unsigned char var_4 = (unsigned char)225;
short var_5 = (short)14658;
unsigned int var_6 = 2484248746U;
unsigned int var_9 = 3400472705U;
unsigned char var_10 = (unsigned char)93;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)90;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 967550187U;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
