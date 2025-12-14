#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -284840411;
unsigned char var_5 = (unsigned char)91;
short var_8 = (short)20200;
unsigned int var_11 = 1908397000U;
int var_12 = 1507128362;
int zero = 0;
int var_13 = -1885371566;
unsigned int var_14 = 3822636207U;
short var_15 = (short)21576;
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
