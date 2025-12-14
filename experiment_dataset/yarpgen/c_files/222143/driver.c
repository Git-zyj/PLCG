#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = -1572424723851469049LL;
unsigned long long int var_14 = 8771579104043203319ULL;
int zero = 0;
unsigned int var_16 = 2210630489U;
unsigned short var_17 = (unsigned short)58986;
long long int var_18 = 8458299774602366247LL;
void init() {
}

void checksum() {
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
