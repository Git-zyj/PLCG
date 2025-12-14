#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
unsigned int var_3 = 1975974026U;
unsigned char var_4 = (unsigned char)44;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 1703395059U;
unsigned char var_9 = (unsigned char)0;
unsigned int var_10 = 823210768U;
unsigned int var_11 = 403812787U;
short var_13 = (short)-6657;
int zero = 0;
signed char var_18 = (signed char)44;
int var_19 = -906396087;
unsigned long long int var_20 = 9007657148981853691ULL;
int var_21 = 1033450699;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
