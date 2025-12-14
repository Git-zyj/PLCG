#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -285587922;
long long int var_12 = 8563227420425003780LL;
unsigned short var_13 = (unsigned short)61866;
int var_14 = -694360409;
short var_15 = (short)11459;
int zero = 0;
unsigned char var_17 = (unsigned char)68;
signed char var_18 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
