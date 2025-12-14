#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)115;
unsigned int var_6 = 717053482U;
unsigned long long int var_7 = 10526307876852218829ULL;
int var_8 = 82344276;
int var_16 = 734475610;
int zero = 0;
long long int var_17 = 8373933028083471978LL;
unsigned short var_18 = (unsigned short)2825;
void init() {
}

void checksum() {
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
