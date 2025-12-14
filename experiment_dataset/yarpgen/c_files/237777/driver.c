#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 572684167;
short var_5 = (short)14949;
unsigned int var_7 = 2110968089U;
unsigned short var_9 = (unsigned short)19986;
short var_11 = (short)24820;
long long int var_12 = 5087787194447556045LL;
int zero = 0;
int var_14 = 635638588;
signed char var_15 = (signed char)110;
int var_16 = -1057995329;
unsigned short var_17 = (unsigned short)20633;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
