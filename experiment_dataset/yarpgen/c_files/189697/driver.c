#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)165;
unsigned long long int var_2 = 4415263072832802283ULL;
unsigned short var_3 = (unsigned short)39142;
unsigned int var_7 = 968060668U;
unsigned short var_8 = (unsigned short)58265;
long long int var_10 = -4244588305056221356LL;
signed char var_11 = (signed char)56;
long long int var_13 = 418396196464839656LL;
short var_14 = (short)-9689;
unsigned long long int var_15 = 11080487041312369627ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)41;
unsigned char var_21 = (unsigned char)15;
void init() {
}

void checksum() {
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
