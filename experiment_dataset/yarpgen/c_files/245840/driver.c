#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1019070238U;
signed char var_3 = (signed char)122;
long long int var_6 = 8829295387863039594LL;
signed char var_7 = (signed char)1;
short var_13 = (short)10079;
int zero = 0;
signed char var_14 = (signed char)-81;
unsigned short var_15 = (unsigned short)11424;
void init() {
}

void checksum() {
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
