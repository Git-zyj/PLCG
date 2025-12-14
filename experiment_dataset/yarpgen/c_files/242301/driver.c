#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1043502267386570934LL;
int var_5 = 755078110;
unsigned long long int var_10 = 9900064675423566465ULL;
short var_12 = (short)19216;
signed char var_14 = (signed char)-86;
int zero = 0;
unsigned short var_15 = (unsigned short)62780;
short var_16 = (short)-19715;
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
