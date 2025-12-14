#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1463263330;
unsigned short var_3 = (unsigned short)6066;
signed char var_11 = (signed char)-118;
int zero = 0;
unsigned short var_17 = (unsigned short)2979;
unsigned short var_18 = (unsigned short)28489;
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
