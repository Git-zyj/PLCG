#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-111;
int var_3 = -429488338;
signed char var_5 = (signed char)-85;
unsigned short var_7 = (unsigned short)49477;
unsigned int var_10 = 597337764U;
int zero = 0;
short var_11 = (short)4269;
unsigned char var_12 = (unsigned char)185;
unsigned long long int var_13 = 11338108364271573437ULL;
unsigned char var_14 = (unsigned char)161;
signed char var_15 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
