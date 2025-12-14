#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2034212570;
unsigned short var_2 = (unsigned short)49790;
unsigned short var_5 = (unsigned short)42217;
unsigned char var_6 = (unsigned char)104;
unsigned char var_8 = (unsigned char)156;
int zero = 0;
unsigned int var_14 = 356394461U;
signed char var_15 = (signed char)72;
int var_16 = -1800566062;
unsigned int var_17 = 391903745U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
