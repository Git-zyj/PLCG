#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2614039762U;
unsigned short var_2 = (unsigned short)45033;
unsigned long long int var_4 = 14278573908934523420ULL;
unsigned short var_8 = (unsigned short)47367;
int zero = 0;
int var_13 = -750848537;
unsigned short var_14 = (unsigned short)29113;
unsigned short var_15 = (unsigned short)4344;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
