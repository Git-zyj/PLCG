#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1104454257U;
unsigned int var_7 = 3441968223U;
short var_8 = (short)-10536;
unsigned short var_9 = (unsigned short)29185;
unsigned int var_12 = 1200346085U;
int zero = 0;
int var_14 = 1034152907;
int var_15 = -598032627;
unsigned long long int var_16 = 12076541232595548408ULL;
int var_17 = -1388021157;
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
