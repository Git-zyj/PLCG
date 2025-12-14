#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 496855233U;
short var_2 = (short)20985;
int var_5 = 1962708896;
int var_7 = -1189160417;
unsigned long long int var_13 = 9040058263309283228ULL;
int zero = 0;
short var_18 = (short)-672;
long long int var_19 = 4203540658360377014LL;
unsigned char var_20 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
