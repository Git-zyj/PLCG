#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_5 = 445958495;
unsigned long long int var_8 = 8993641990790055197ULL;
unsigned short var_11 = (unsigned short)7260;
int zero = 0;
unsigned char var_12 = (unsigned char)20;
unsigned int var_13 = 1121494735U;
int var_14 = 1421355723;
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
