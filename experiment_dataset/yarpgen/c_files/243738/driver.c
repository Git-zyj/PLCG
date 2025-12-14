#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26510;
signed char var_1 = (signed char)-119;
short var_2 = (short)15489;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)26;
long long int var_7 = -5526337075774382754LL;
long long int var_9 = -8245530928470786396LL;
short var_10 = (short)-32519;
unsigned long long int var_11 = 1777355461201068115ULL;
int zero = 0;
long long int var_13 = 6613107772991611765LL;
unsigned long long int var_14 = 1911466620666466050ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
