#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9159840633678260836LL;
unsigned short var_2 = (unsigned short)20525;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 3528023497U;
unsigned char var_10 = (unsigned char)223;
int zero = 0;
unsigned short var_12 = (unsigned short)17048;
unsigned char var_13 = (unsigned char)39;
unsigned short var_14 = (unsigned short)55877;
unsigned int var_15 = 538050147U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
