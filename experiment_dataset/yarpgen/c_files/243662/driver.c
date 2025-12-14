#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10128;
signed char var_7 = (signed char)-9;
short var_8 = (short)14249;
signed char var_9 = (signed char)-80;
int zero = 0;
unsigned short var_10 = (unsigned short)50997;
signed char var_11 = (signed char)-9;
short var_12 = (short)-21278;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
