#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2038308530U;
signed char var_2 = (signed char)-62;
int var_14 = -598751125;
unsigned short var_16 = (unsigned short)17731;
long long int var_17 = -4731399315430059891LL;
int zero = 0;
long long int var_19 = 160878128940530942LL;
unsigned int var_20 = 2623157215U;
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
