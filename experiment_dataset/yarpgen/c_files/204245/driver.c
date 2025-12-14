#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43842;
long long int var_2 = -1613756997199316448LL;
short var_3 = (short)-31361;
short var_4 = (short)28834;
long long int var_6 = 4315048379430670083LL;
signed char var_8 = (signed char)-14;
int zero = 0;
unsigned int var_15 = 1908741605U;
signed char var_16 = (signed char)-1;
unsigned short var_17 = (unsigned short)39681;
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
