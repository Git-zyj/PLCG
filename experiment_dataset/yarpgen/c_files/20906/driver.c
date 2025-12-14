#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)57;
long long int var_3 = 1631247421693177346LL;
unsigned long long int var_11 = 12374919630432094043ULL;
int var_13 = 786560469;
short var_14 = (short)15014;
unsigned int var_15 = 983937120U;
unsigned int var_17 = 3184117078U;
int zero = 0;
unsigned char var_19 = (unsigned char)6;
unsigned int var_20 = 3906696180U;
unsigned int var_21 = 1475027806U;
unsigned char var_22 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
