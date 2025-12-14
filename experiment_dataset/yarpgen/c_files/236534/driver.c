#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)221;
unsigned char var_11 = (unsigned char)163;
unsigned long long int var_12 = 4855394582278031446ULL;
unsigned short var_13 = (unsigned short)201;
int var_17 = 1992509903;
unsigned char var_18 = (unsigned char)149;
int zero = 0;
int var_20 = -980616465;
unsigned int var_21 = 1347569618U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
