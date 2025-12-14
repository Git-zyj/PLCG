#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1680917529U;
unsigned char var_7 = (unsigned char)77;
unsigned short var_12 = (unsigned short)15458;
unsigned short var_14 = (unsigned short)17343;
int zero = 0;
unsigned long long int var_15 = 15883666685465010048ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)7718;
void init() {
}

void checksum() {
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
