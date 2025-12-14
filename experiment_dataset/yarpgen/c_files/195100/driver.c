#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1001797766;
int var_9 = -1619351705;
long long int var_10 = -711474784450798862LL;
unsigned short var_11 = (unsigned short)40218;
signed char var_12 = (signed char)75;
int zero = 0;
long long int var_14 = 4398062709343958287LL;
unsigned short var_15 = (unsigned short)11971;
short var_16 = (short)3680;
short var_17 = (short)-29807;
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
