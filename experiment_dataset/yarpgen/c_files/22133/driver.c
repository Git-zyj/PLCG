#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)27257;
int var_14 = -1633179443;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)147;
unsigned char var_17 = (unsigned char)212;
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
