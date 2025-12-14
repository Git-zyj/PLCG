#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13797;
signed char var_1 = (signed char)-119;
unsigned long long int var_2 = 3599084248175618367ULL;
int var_5 = 117389733;
short var_6 = (short)79;
unsigned char var_8 = (unsigned char)221;
int var_9 = -1577211246;
int zero = 0;
unsigned char var_13 = (unsigned char)217;
int var_14 = -1972882355;
unsigned long long int var_15 = 15416762200800861032ULL;
void init() {
}

void checksum() {
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
