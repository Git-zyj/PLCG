#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_5 = 2214692829U;
unsigned long long int var_12 = 662454816658283153ULL;
unsigned char var_13 = (unsigned char)91;
int zero = 0;
unsigned char var_14 = (unsigned char)93;
short var_15 = (short)-14024;
void init() {
}

void checksum() {
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
