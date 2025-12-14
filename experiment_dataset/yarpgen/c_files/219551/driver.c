#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 41740411U;
unsigned short var_4 = (unsigned short)3401;
int var_12 = 1515683916;
unsigned int var_15 = 3631824217U;
signed char var_16 = (signed char)102;
int zero = 0;
int var_19 = 637387780;
unsigned short var_20 = (unsigned short)24380;
long long int var_21 = -4085867448511983797LL;
short var_22 = (short)448;
unsigned short var_23 = (unsigned short)25717;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
