#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5177296224228542230LL;
unsigned char var_7 = (unsigned char)135;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 1587297125;
unsigned short var_19 = (unsigned short)22660;
unsigned long long int var_20 = 5594408692319034210ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
