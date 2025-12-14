#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7708034023420545042LL;
unsigned short var_6 = (unsigned short)36001;
short var_8 = (short)16054;
unsigned char var_10 = (unsigned char)156;
int zero = 0;
unsigned int var_14 = 3618194727U;
unsigned short var_15 = (unsigned short)4541;
unsigned short var_16 = (unsigned short)63780;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
