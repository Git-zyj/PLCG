#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4643039703685257746ULL;
unsigned long long int var_2 = 15677115629908399211ULL;
signed char var_4 = (signed char)-2;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)40312;
long long int var_13 = 1789306531074466051LL;
unsigned short var_14 = (unsigned short)58003;
short var_15 = (short)-19777;
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
