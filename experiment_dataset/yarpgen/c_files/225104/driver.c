#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1727197218;
unsigned short var_14 = (unsigned short)5842;
int zero = 0;
signed char var_19 = (signed char)48;
unsigned short var_20 = (unsigned short)13361;
unsigned long long int var_21 = 11529676649063870934ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
