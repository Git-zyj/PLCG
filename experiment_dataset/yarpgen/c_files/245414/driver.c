#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6897;
unsigned short var_6 = (unsigned short)13855;
unsigned short var_11 = (unsigned short)31023;
int zero = 0;
short var_20 = (short)14529;
short var_21 = (short)4376;
short var_22 = (short)21232;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
