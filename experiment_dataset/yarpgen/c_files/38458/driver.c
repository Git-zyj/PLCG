#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16882;
unsigned long long int var_2 = 18094359630351567085ULL;
short var_8 = (short)-175;
unsigned char var_10 = (unsigned char)47;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 4778969305991615431LL;
signed char var_15 = (signed char)-37;
void init() {
}

void checksum() {
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
