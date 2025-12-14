#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
signed char var_1 = (signed char)114;
signed char var_5 = (signed char)-4;
unsigned int var_7 = 3374547917U;
unsigned short var_11 = (unsigned short)15575;
unsigned short var_14 = (unsigned short)30366;
int zero = 0;
signed char var_17 = (signed char)-104;
int var_18 = -844749835;
unsigned int var_19 = 3180183726U;
unsigned int var_20 = 2765403914U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
