#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11515569286810857719ULL;
unsigned int var_11 = 1895864997U;
unsigned short var_13 = (unsigned short)65480;
long long int var_14 = 6396832241704432305LL;
int zero = 0;
unsigned short var_20 = (unsigned short)52267;
unsigned int var_21 = 1710557116U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
