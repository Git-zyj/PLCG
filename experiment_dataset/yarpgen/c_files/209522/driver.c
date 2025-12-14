#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29248;
unsigned int var_3 = 142897322U;
signed char var_5 = (signed char)6;
unsigned int var_8 = 4252256543U;
signed char var_9 = (signed char)24;
unsigned int var_14 = 3918579331U;
int zero = 0;
unsigned int var_15 = 4107366843U;
unsigned long long int var_16 = 2689415093156084630ULL;
unsigned long long int var_17 = 12690866928872258389ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
