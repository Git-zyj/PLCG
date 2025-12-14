#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11534;
int var_5 = -494629151;
unsigned long long int var_6 = 11720264456621090758ULL;
int var_11 = -1015716717;
int zero = 0;
unsigned int var_13 = 1670321459U;
int var_14 = -1831226114;
void init() {
}

void checksum() {
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
