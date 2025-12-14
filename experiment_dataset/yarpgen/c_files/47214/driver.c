#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
unsigned short var_2 = (unsigned short)44704;
long long int var_12 = -2988290554210786546LL;
unsigned char var_14 = (unsigned char)86;
int zero = 0;
unsigned int var_16 = 1343678911U;
long long int var_17 = -3904058972004022395LL;
void init() {
}

void checksum() {
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
