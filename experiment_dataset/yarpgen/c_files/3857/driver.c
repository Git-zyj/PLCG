#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44692;
long long int var_2 = -5534402092771525118LL;
signed char var_5 = (signed char)-113;
short var_7 = (short)21285;
int zero = 0;
signed char var_10 = (signed char)41;
int var_11 = 757065200;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
