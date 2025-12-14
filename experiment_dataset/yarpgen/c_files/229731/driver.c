#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 830787278281417866ULL;
unsigned int var_8 = 830615523U;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)176;
int zero = 0;
unsigned long long int var_14 = 11467089083206142613ULL;
unsigned int var_15 = 3003155353U;
unsigned short var_16 = (unsigned short)61138;
signed char var_17 = (signed char)-125;
unsigned short var_18 = (unsigned short)61492;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
