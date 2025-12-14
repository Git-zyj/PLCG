#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 13150714153837685532ULL;
signed char var_8 = (signed char)-53;
int var_9 = 865853931;
unsigned short var_11 = (unsigned short)930;
signed char var_12 = (signed char)-56;
_Bool var_14 = (_Bool)0;
unsigned long long int var_19 = 1358061530967434255ULL;
int zero = 0;
signed char var_20 = (signed char)126;
signed char var_21 = (signed char)64;
unsigned char var_22 = (unsigned char)123;
unsigned long long int var_23 = 9624182626715057372ULL;
long long int var_24 = -3053693834322621392LL;
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
