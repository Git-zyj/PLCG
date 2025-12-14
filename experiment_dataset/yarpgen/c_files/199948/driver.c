#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-4041;
unsigned long long int var_11 = 15638875853648150395ULL;
unsigned long long int var_12 = 12762246593808301450ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)5;
unsigned long long int var_17 = 1516077527466019747ULL;
short var_18 = (short)1523;
unsigned long long int var_19 = 11727879098609034830ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
