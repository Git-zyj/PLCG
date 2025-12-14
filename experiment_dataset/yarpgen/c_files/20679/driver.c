#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14072196135125632914ULL;
short var_4 = (short)-5024;
unsigned int var_14 = 3522652916U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 2812485402232842746ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
