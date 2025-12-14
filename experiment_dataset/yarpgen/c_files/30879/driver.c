#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)75;
short var_5 = (short)733;
short var_9 = (short)28133;
unsigned long long int var_10 = 17842005265365140576ULL;
int zero = 0;
unsigned long long int var_13 = 2714742200530743865ULL;
unsigned short var_14 = (unsigned short)11760;
unsigned char var_15 = (unsigned char)150;
unsigned short var_16 = (unsigned short)18882;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
