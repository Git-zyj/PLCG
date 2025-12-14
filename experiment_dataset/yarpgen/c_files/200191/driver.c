#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1331419178;
short var_6 = (short)12134;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)95;
short var_12 = (short)-21792;
int zero = 0;
short var_14 = (short)-3693;
unsigned long long int var_15 = 15445193598980854497ULL;
short var_16 = (short)-9309;
unsigned int var_17 = 116114697U;
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
