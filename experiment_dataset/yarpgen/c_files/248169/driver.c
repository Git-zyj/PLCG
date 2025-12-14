#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)17835;
short var_6 = (short)-31542;
unsigned int var_7 = 2980271960U;
unsigned long long int var_8 = 5239050884295305729ULL;
int var_9 = -1663848451;
int zero = 0;
unsigned int var_10 = 3520209989U;
unsigned int var_11 = 628468914U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
