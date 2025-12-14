#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 973495731;
short var_1 = (short)14679;
short var_2 = (short)-1982;
short var_6 = (short)23741;
_Bool var_9 = (_Bool)0;
unsigned int var_13 = 2339838949U;
int zero = 0;
int var_14 = 283939052;
_Bool var_15 = (_Bool)0;
short var_16 = (short)20224;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
