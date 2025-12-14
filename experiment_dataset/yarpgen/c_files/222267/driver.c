#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59460;
short var_2 = (short)-26124;
int var_4 = -1256314263;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)97;
unsigned long long int var_8 = 9746918774448931881ULL;
unsigned long long int var_11 = 15886518357449715721ULL;
short var_16 = (short)-8651;
int zero = 0;
unsigned short var_17 = (unsigned short)53776;
unsigned long long int var_18 = 14064256913849880739ULL;
_Bool var_19 = (_Bool)0;
long long int var_20 = 1825805568327919951LL;
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
