#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 718572229U;
unsigned int var_6 = 1199869998U;
short var_7 = (short)26357;
short var_11 = (short)7706;
unsigned int var_12 = 3662079414U;
int zero = 0;
unsigned int var_14 = 1397619788U;
short var_15 = (short)-22069;
long long int var_16 = 5908586856292257473LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
