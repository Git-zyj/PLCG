#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5103847894711748874ULL;
unsigned long long int var_4 = 11829539867531186998ULL;
unsigned short var_6 = (unsigned short)63753;
unsigned short var_7 = (unsigned short)60426;
unsigned int var_8 = 4106501455U;
unsigned short var_10 = (unsigned short)28419;
int zero = 0;
int var_13 = 2052235316;
short var_14 = (short)844;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
