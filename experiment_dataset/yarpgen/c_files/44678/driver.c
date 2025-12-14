#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1433724703U;
short var_7 = (short)31977;
signed char var_8 = (signed char)-12;
signed char var_9 = (signed char)45;
long long int var_10 = -6401171607826760854LL;
short var_11 = (short)-1016;
int zero = 0;
unsigned int var_12 = 1108073769U;
unsigned long long int var_13 = 2518729966212829037ULL;
long long int var_14 = 3840436806124678708LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
