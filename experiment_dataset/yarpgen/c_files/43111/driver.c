#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-99;
short var_8 = (short)8089;
signed char var_10 = (signed char)-4;
int var_12 = 1177417907;
signed char var_14 = (signed char)48;
unsigned short var_15 = (unsigned short)13968;
int zero = 0;
int var_18 = 228899783;
unsigned long long int var_19 = 767197527531714376ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
