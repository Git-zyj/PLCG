#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_14 = (unsigned char)38;
unsigned long long int var_16 = 16178046499763322490ULL;
int zero = 0;
unsigned long long int var_19 = 16809900422486517056ULL;
unsigned int var_20 = 3924835733U;
long long int var_21 = 2484440003698001869LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
