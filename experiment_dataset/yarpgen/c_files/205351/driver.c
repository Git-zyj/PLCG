#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)62;
unsigned char var_2 = (unsigned char)228;
unsigned int var_4 = 2712958793U;
signed char var_5 = (signed char)-94;
signed char var_7 = (signed char)62;
unsigned int var_12 = 1520954701U;
signed char var_14 = (signed char)-59;
unsigned char var_17 = (unsigned char)134;
signed char var_18 = (signed char)40;
int zero = 0;
signed char var_20 = (signed char)-31;
int var_21 = 1380714517;
short var_22 = (short)15786;
unsigned short var_23 = (unsigned short)18081;
short var_24 = (short)-17018;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
