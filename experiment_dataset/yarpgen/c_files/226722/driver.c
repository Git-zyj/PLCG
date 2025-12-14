#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8774910585216254025LL;
signed char var_2 = (signed char)-43;
signed char var_5 = (signed char)-62;
unsigned short var_6 = (unsigned short)34544;
unsigned char var_8 = (unsigned char)190;
short var_9 = (short)-29346;
unsigned long long int var_12 = 16073658468016677686ULL;
int zero = 0;
unsigned long long int var_13 = 15592304628695302738ULL;
unsigned long long int var_14 = 11883845035091978220ULL;
unsigned int var_15 = 1235044771U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
