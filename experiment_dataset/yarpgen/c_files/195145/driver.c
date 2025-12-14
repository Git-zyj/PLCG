#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3130758462U;
unsigned long long int var_1 = 2265644078893564887ULL;
unsigned short var_14 = (unsigned short)26905;
int zero = 0;
unsigned short var_20 = (unsigned short)10650;
unsigned short var_21 = (unsigned short)21328;
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
