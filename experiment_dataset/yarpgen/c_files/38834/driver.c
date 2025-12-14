#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5621867949239602505LL;
signed char var_11 = (signed char)40;
unsigned short var_13 = (unsigned short)9201;
int zero = 0;
long long int var_16 = -4243423625325222584LL;
unsigned char var_17 = (unsigned char)237;
short var_18 = (short)12375;
long long int var_19 = 8158915103039553481LL;
void init() {
}

void checksum() {
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
