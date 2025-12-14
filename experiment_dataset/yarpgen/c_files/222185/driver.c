#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5172288127291488232LL;
long long int var_2 = -7221165641562576417LL;
short var_4 = (short)31005;
signed char var_7 = (signed char)-67;
unsigned short var_10 = (unsigned short)45489;
unsigned long long int var_11 = 7672442583787018113ULL;
int zero = 0;
unsigned int var_12 = 2812610242U;
signed char var_13 = (signed char)7;
unsigned long long int var_14 = 2661886269088282593ULL;
short var_15 = (short)15342;
signed char var_16 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
