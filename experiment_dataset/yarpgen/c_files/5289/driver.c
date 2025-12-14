#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-24;
unsigned short var_12 = (unsigned short)22778;
long long int var_15 = -8772524844875723315LL;
int zero = 0;
unsigned long long int var_20 = 12897323770032888019ULL;
unsigned long long int var_21 = 18012167036088181408ULL;
short var_22 = (short)-30055;
int var_23 = -501982065;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
