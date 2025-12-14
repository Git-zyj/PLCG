#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)28;
signed char var_2 = (signed char)15;
short var_5 = (short)-11244;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1494546646U;
short var_11 = (short)-13935;
int var_12 = 468149031;
short var_15 = (short)-13423;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 3753592852U;
signed char var_19 = (signed char)4;
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
