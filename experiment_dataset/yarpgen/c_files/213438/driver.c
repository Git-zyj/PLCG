#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)53;
int var_9 = 977552489;
long long int var_13 = 2741862094109193270LL;
unsigned long long int var_16 = 3379984400653991441ULL;
int zero = 0;
short var_17 = (short)2148;
unsigned short var_18 = (unsigned short)45774;
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
