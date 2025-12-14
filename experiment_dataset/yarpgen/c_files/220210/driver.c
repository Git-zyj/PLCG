#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1415479871;
long long int var_1 = 1247127273783723196LL;
unsigned int var_3 = 4056162675U;
unsigned char var_4 = (unsigned char)134;
int zero = 0;
int var_16 = 1891916034;
signed char var_17 = (signed char)-58;
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
