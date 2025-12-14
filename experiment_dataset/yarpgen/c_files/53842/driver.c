#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3061780628U;
long long int var_9 = 5696002418621350596LL;
int zero = 0;
int var_17 = -477922407;
unsigned int var_18 = 4082179754U;
unsigned short var_19 = (unsigned short)52785;
unsigned int var_20 = 3527781083U;
void init() {
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
