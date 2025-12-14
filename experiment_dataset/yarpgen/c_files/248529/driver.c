#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18286;
short var_9 = (short)22130;
int zero = 0;
short var_16 = (short)-32120;
unsigned int var_17 = 3567742307U;
unsigned short var_18 = (unsigned short)7797;
signed char var_19 = (signed char)9;
unsigned short var_20 = (unsigned short)385;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
