#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3516601171391810681LL;
long long int var_5 = -2022716065079700223LL;
long long int var_8 = -45889308002212015LL;
signed char var_11 = (signed char)-30;
short var_12 = (short)27253;
int zero = 0;
unsigned short var_16 = (unsigned short)36478;
int var_17 = -1465264405;
void init() {
}

void checksum() {
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
