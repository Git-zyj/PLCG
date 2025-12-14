#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1007902173376585576LL;
long long int var_6 = -5173357799002710085LL;
long long int var_7 = 4628238121770712746LL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-7834;
int zero = 0;
short var_11 = (short)20041;
int var_12 = -1663661680;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
