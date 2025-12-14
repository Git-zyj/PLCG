#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 921260521U;
unsigned long long int var_3 = 8788390167177574933ULL;
unsigned long long int var_4 = 4909407500940250088ULL;
unsigned char var_5 = (unsigned char)219;
unsigned long long int var_6 = 18099752327613266597ULL;
unsigned long long int var_11 = 2162620232453423185ULL;
unsigned long long int var_16 = 2805888503528101187ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)53;
unsigned int var_21 = 1392561939U;
unsigned int var_22 = 1635544035U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
