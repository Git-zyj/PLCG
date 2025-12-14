#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31821;
short var_3 = (short)25243;
short var_6 = (short)-4518;
int var_8 = -224021969;
unsigned char var_11 = (unsigned char)141;
long long int var_13 = -6400300047208234482LL;
short var_15 = (short)7747;
int zero = 0;
short var_20 = (short)10594;
signed char var_21 = (signed char)42;
int var_22 = -1077635515;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
