#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 55164080;
unsigned short var_3 = (unsigned short)8872;
unsigned short var_4 = (unsigned short)23354;
int var_7 = -50667714;
unsigned short var_8 = (unsigned short)60637;
unsigned long long int var_9 = 6109010881789926393ULL;
unsigned long long int var_11 = 7980313957132259472ULL;
unsigned short var_12 = (unsigned short)24668;
short var_13 = (short)21178;
unsigned short var_14 = (unsigned short)13344;
long long int var_15 = 1102460576825794183LL;
unsigned int var_16 = 1727866869U;
int zero = 0;
unsigned short var_18 = (unsigned short)26530;
unsigned int var_19 = 525474809U;
void init() {
}

void checksum() {
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
