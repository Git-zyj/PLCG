#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1149256710U;
signed char var_2 = (signed char)-48;
long long int var_6 = -2382209971955031922LL;
unsigned short var_14 = (unsigned short)16104;
signed char var_16 = (signed char)-73;
long long int var_17 = 7274310524675290274LL;
int zero = 0;
unsigned int var_19 = 2505064922U;
int var_20 = -1940913068;
void init() {
}

void checksum() {
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
