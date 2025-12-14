#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9044843976491952188LL;
unsigned char var_4 = (unsigned char)43;
unsigned int var_5 = 2547639809U;
unsigned long long int var_6 = 13031146545577371075ULL;
long long int var_10 = -2074900884637778089LL;
unsigned char var_11 = (unsigned char)28;
int var_12 = -1173930110;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)69;
unsigned int var_17 = 2199794746U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
