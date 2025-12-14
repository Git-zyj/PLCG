#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8250335448058547890ULL;
unsigned int var_2 = 655268683U;
unsigned int var_5 = 3350256668U;
unsigned long long int var_9 = 8200859869303694614ULL;
int var_12 = -1283756302;
int zero = 0;
unsigned int var_17 = 3099605106U;
unsigned int var_18 = 1812094484U;
void init() {
}

void checksum() {
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
