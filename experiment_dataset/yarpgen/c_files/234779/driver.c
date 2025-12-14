#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)59632;
int var_13 = -1410485037;
unsigned short var_14 = (unsigned short)64073;
unsigned long long int var_15 = 12158558134504510622ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)42740;
unsigned short var_17 = (unsigned short)12879;
signed char var_18 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
