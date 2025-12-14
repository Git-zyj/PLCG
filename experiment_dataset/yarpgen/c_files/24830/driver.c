#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-111;
int var_7 = 955712321;
unsigned int var_8 = 3412342367U;
int var_10 = -932682050;
signed char var_17 = (signed char)-69;
int zero = 0;
unsigned short var_19 = (unsigned short)55021;
int var_20 = 221419092;
unsigned short var_21 = (unsigned short)48581;
int var_22 = 1168806806;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
