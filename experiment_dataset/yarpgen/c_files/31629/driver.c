#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 3142064812624053986ULL;
unsigned int var_10 = 82043898U;
short var_14 = (short)-14489;
unsigned char var_16 = (unsigned char)195;
int zero = 0;
signed char var_18 = (signed char)46;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)2918;
void init() {
}

void checksum() {
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
