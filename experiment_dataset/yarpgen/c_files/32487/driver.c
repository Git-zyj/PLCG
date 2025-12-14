#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_5 = -1758391691;
int var_6 = 1735090215;
signed char var_9 = (signed char)91;
long long int var_11 = -4148771170136305952LL;
int zero = 0;
unsigned short var_17 = (unsigned short)53725;
unsigned long long int var_18 = 12097695308024241346ULL;
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
