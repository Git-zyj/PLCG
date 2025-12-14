#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2052274217;
unsigned int var_6 = 3451220183U;
unsigned long long int var_7 = 11776428864007279452ULL;
unsigned long long int var_13 = 5258339149507007142ULL;
int zero = 0;
int var_19 = -159822334;
unsigned char var_20 = (unsigned char)235;
unsigned char var_21 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
