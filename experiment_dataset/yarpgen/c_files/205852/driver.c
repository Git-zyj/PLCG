#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34405;
unsigned short var_2 = (unsigned short)27631;
unsigned int var_3 = 831308365U;
int var_8 = -2105628383;
int var_9 = -165503443;
unsigned int var_10 = 1792273886U;
int zero = 0;
unsigned short var_11 = (unsigned short)1127;
unsigned char var_12 = (unsigned char)52;
unsigned int var_13 = 2141387707U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
