#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)61100;
long long int var_7 = 2684474842095909011LL;
signed char var_10 = (signed char)23;
long long int var_11 = -7662842293562153074LL;
short var_16 = (short)-7884;
int zero = 0;
unsigned char var_17 = (unsigned char)58;
unsigned int var_18 = 3364285818U;
signed char var_19 = (signed char)-63;
void init() {
}

void checksum() {
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
