#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1012783955;
unsigned long long int var_6 = 17609668177851982992ULL;
int var_7 = -1608407851;
unsigned char var_8 = (unsigned char)158;
long long int var_9 = 2326247209083277369LL;
unsigned char var_10 = (unsigned char)113;
long long int var_12 = -7892003825934369450LL;
int zero = 0;
unsigned int var_16 = 2398695341U;
int var_17 = -1354577721;
short var_18 = (short)-19814;
void init() {
}

void checksum() {
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
