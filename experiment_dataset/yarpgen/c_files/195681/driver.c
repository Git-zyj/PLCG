#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25067;
unsigned int var_3 = 435436074U;
short var_5 = (short)-8691;
short var_6 = (short)30376;
short var_7 = (short)-24216;
int zero = 0;
short var_10 = (short)5682;
short var_11 = (short)32311;
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
