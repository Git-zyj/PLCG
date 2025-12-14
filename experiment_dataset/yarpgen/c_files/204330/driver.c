#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -271975071658816262LL;
unsigned int var_2 = 1879489080U;
unsigned int var_3 = 4246854146U;
unsigned int var_7 = 1026798655U;
int zero = 0;
unsigned short var_13 = (unsigned short)41667;
unsigned int var_14 = 320016728U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
