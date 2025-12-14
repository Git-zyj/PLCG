#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_6 = (signed char)7;
unsigned short var_12 = (unsigned short)7123;
_Bool var_15 = (_Bool)0;
signed char var_18 = (signed char)47;
int zero = 0;
unsigned long long int var_19 = 4373415660560422147ULL;
unsigned int var_20 = 2372026122U;
void init() {
}

void checksum() {
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
