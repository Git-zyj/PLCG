#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2021557888U;
short var_3 = (short)24886;
long long int var_10 = -1604189399712783230LL;
unsigned int var_12 = 2357595531U;
unsigned short var_14 = (unsigned short)38690;
int var_15 = 1310216431;
int zero = 0;
unsigned int var_17 = 2948547448U;
unsigned long long int var_18 = 1607952688330753644ULL;
unsigned int var_19 = 224570282U;
int var_20 = -1438244727;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
