#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -900704143698021339LL;
int var_3 = -1763247279;
unsigned char var_11 = (unsigned char)110;
unsigned long long int var_14 = 7521061114186767056ULL;
int zero = 0;
unsigned int var_15 = 4070797051U;
unsigned long long int var_16 = 390790178059654500ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
