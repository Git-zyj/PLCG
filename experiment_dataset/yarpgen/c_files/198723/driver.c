#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1536255732;
unsigned int var_3 = 1720964517U;
int var_4 = 272810820;
long long int var_6 = -4937408781282311012LL;
unsigned int var_9 = 1497251694U;
unsigned int var_14 = 3483746499U;
int zero = 0;
int var_15 = -353864722;
long long int var_16 = 7933292918282389536LL;
long long int var_17 = 8769092555794601735LL;
long long int var_18 = -7250607292171200542LL;
void init() {
}

void checksum() {
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
