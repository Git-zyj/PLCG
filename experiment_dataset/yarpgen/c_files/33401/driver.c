#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3987172537U;
int var_6 = 1712839534;
long long int var_12 = 1221548453727357523LL;
int var_13 = -127986634;
int zero = 0;
short var_16 = (short)3002;
long long int var_17 = 1238047538864724902LL;
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
