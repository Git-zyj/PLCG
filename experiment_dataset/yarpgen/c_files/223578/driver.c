#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10705170706070443462ULL;
unsigned short var_3 = (unsigned short)15354;
int var_5 = -1944339949;
long long int var_6 = -4839800260326211037LL;
short var_7 = (short)32117;
int var_11 = -488399098;
short var_15 = (short)13433;
int zero = 0;
int var_16 = 496287404;
unsigned short var_17 = (unsigned short)63444;
int var_18 = -194910014;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
