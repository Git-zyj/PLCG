#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)35469;
short var_11 = (short)-28338;
int zero = 0;
unsigned long long int var_15 = 11600423513314680300ULL;
short var_16 = (short)-6657;
short var_17 = (short)15630;
unsigned long long int var_18 = 5848457526983084594ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
