#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
signed char var_1 = (signed char)99;
signed char var_2 = (signed char)-94;
int var_3 = -1593712797;
short var_8 = (short)-19679;
long long int var_10 = -1715418072663153129LL;
int zero = 0;
int var_12 = 730194366;
unsigned short var_13 = (unsigned short)8393;
unsigned short var_14 = (unsigned short)22374;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
