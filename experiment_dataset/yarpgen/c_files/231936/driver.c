#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)146;
int var_7 = 134710337;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int var_12 = 454287610;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 1931980888;
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
