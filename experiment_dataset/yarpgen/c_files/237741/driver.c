#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
short var_2 = (short)21194;
unsigned short var_4 = (unsigned short)32772;
unsigned char var_5 = (unsigned char)94;
int var_10 = 1016146396;
int zero = 0;
signed char var_12 = (signed char)114;
unsigned char var_13 = (unsigned char)97;
short var_14 = (short)3599;
int var_15 = -803546505;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
