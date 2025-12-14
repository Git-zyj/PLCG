#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)35;
int var_5 = 2020849167;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)195;
int zero = 0;
int var_14 = 29983180;
unsigned int var_15 = 658368113U;
unsigned int var_16 = 604799570U;
unsigned short var_17 = (unsigned short)1101;
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
