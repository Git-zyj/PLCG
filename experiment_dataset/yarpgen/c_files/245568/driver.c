#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1148661729U;
unsigned long long int var_1 = 6011085330214757555ULL;
unsigned char var_3 = (unsigned char)96;
unsigned int var_4 = 1718230446U;
unsigned char var_9 = (unsigned char)175;
int zero = 0;
unsigned short var_15 = (unsigned short)47569;
int var_16 = -1564331776;
void init() {
}

void checksum() {
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
