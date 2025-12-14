#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19254;
unsigned char var_3 = (unsigned char)73;
short var_5 = (short)23541;
int zero = 0;
int var_12 = 1797700877;
signed char var_13 = (signed char)-50;
unsigned long long int var_14 = 4147460119241002747ULL;
unsigned int var_15 = 1301108023U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
