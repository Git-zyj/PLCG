#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 332952181877944436ULL;
signed char var_2 = (signed char)-14;
unsigned int var_5 = 3118237529U;
short var_8 = (short)7265;
int zero = 0;
unsigned long long int var_12 = 5097298557858438260ULL;
unsigned short var_13 = (unsigned short)50603;
void init() {
}

void checksum() {
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
