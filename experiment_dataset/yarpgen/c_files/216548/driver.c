#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1619788481;
unsigned int var_2 = 4189384615U;
short var_9 = (short)-17511;
signed char var_10 = (signed char)-27;
int zero = 0;
short var_15 = (short)-27273;
short var_16 = (short)26284;
long long int var_17 = -1430633779926298132LL;
int var_18 = -566724401;
unsigned char var_19 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
