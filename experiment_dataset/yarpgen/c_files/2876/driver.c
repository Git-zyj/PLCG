#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
unsigned long long int var_2 = 16183514380791159221ULL;
signed char var_3 = (signed char)100;
short var_6 = (short)21153;
short var_9 = (short)-14442;
unsigned long long int var_11 = 17662843732456349511ULL;
unsigned char var_13 = (unsigned char)117;
short var_14 = (short)-6191;
unsigned int var_15 = 85122422U;
int var_18 = 273546829;
int zero = 0;
unsigned long long int var_19 = 314069946234405186ULL;
unsigned int var_20 = 3752557595U;
short var_21 = (short)8509;
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
