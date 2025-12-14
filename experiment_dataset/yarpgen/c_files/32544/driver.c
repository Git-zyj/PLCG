#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 2168923870742213238ULL;
short var_8 = (short)13911;
unsigned char var_9 = (unsigned char)73;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)-20653;
unsigned char var_17 = (unsigned char)95;
_Bool var_18 = (_Bool)0;
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
