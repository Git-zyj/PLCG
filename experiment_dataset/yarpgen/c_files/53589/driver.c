#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7081017107813199710ULL;
unsigned short var_4 = (unsigned short)10197;
long long int var_7 = -4146642212507719237LL;
int var_8 = 1483746591;
int var_12 = -217288670;
int zero = 0;
unsigned int var_13 = 3722893937U;
unsigned short var_14 = (unsigned short)33532;
void init() {
}

void checksum() {
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
