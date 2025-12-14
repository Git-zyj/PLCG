#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14726483016878350305ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 12999530418433002718ULL;
unsigned int var_8 = 2637323806U;
long long int var_10 = 8388934807927060138LL;
int zero = 0;
unsigned int var_16 = 3804599502U;
short var_17 = (short)-2364;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
