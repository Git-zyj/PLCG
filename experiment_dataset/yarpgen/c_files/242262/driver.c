#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8315;
unsigned int var_4 = 1532336329U;
unsigned char var_5 = (unsigned char)117;
unsigned char var_10 = (unsigned char)253;
unsigned long long int var_12 = 1259800673695123955ULL;
unsigned long long int var_18 = 10841539423684666586ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-8931;
unsigned long long int var_22 = 10865545310033371692ULL;
void init() {
}

void checksum() {
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
