#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 244401063;
unsigned short var_4 = (unsigned short)20321;
int var_9 = 730755343;
int var_10 = -870342008;
unsigned short var_13 = (unsigned short)50323;
int zero = 0;
unsigned long long int var_15 = 6095729722002802272ULL;
unsigned short var_16 = (unsigned short)42617;
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
