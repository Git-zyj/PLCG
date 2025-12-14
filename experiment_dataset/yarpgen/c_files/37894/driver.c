#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-14;
signed char var_4 = (signed char)58;
short var_11 = (short)14604;
unsigned short var_13 = (unsigned short)12283;
int zero = 0;
unsigned int var_14 = 2496719421U;
signed char var_15 = (signed char)100;
signed char var_16 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
