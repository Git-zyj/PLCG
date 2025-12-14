#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20016;
long long int var_4 = 3317959355001098322LL;
int var_5 = 644168203;
int var_6 = 975314711;
int var_7 = -793624537;
unsigned short var_8 = (unsigned short)38145;
int zero = 0;
long long int var_16 = 2967370670059802274LL;
int var_17 = 1195817571;
unsigned long long int var_18 = 7758267950208646117ULL;
signed char var_19 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
