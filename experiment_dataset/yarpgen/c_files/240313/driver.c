#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-54;
long long int var_6 = 5794409974513483093LL;
int var_11 = 9868536;
unsigned int var_13 = 83140981U;
unsigned long long int var_17 = 13437222385478662316ULL;
int zero = 0;
long long int var_18 = -2102580044827246724LL;
int var_19 = 1880562898;
unsigned short var_20 = (unsigned short)13304;
long long int var_21 = -5596701755580627076LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
