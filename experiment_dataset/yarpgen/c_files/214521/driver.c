#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)52;
unsigned short var_7 = (unsigned short)41089;
unsigned long long int var_12 = 3202823889906169589ULL;
int zero = 0;
unsigned int var_16 = 1400022369U;
unsigned short var_17 = (unsigned short)46593;
short var_18 = (short)17062;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
