#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-6081;
unsigned int var_8 = 3631420725U;
long long int var_15 = -5157773190516181711LL;
int zero = 0;
long long int var_19 = -1774382198911507173LL;
short var_20 = (short)-21469;
unsigned int var_21 = 2169325629U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
