#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3102733106U;
unsigned long long int var_7 = 13750131423332346036ULL;
unsigned long long int var_8 = 7719083946963951204ULL;
unsigned long long int var_9 = 6221897492578972197ULL;
short var_12 = (short)-3850;
short var_14 = (short)-2761;
short var_15 = (short)3962;
int zero = 0;
unsigned char var_17 = (unsigned char)134;
unsigned int var_18 = 3681384153U;
unsigned long long int var_19 = 15967331011681845988ULL;
void init() {
}

void checksum() {
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
