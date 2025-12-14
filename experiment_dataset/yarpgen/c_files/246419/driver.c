#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
int var_1 = 1248932408;
signed char var_2 = (signed char)-119;
unsigned long long int var_3 = 2839498942665252312ULL;
long long int var_4 = 1321296079884169547LL;
unsigned long long int var_6 = 8910992555545335681ULL;
short var_7 = (short)32339;
short var_8 = (short)18031;
short var_10 = (short)-32327;
unsigned char var_11 = (unsigned char)227;
unsigned char var_12 = (unsigned char)207;
int zero = 0;
short var_13 = (short)-19634;
int var_14 = -702851403;
unsigned char var_15 = (unsigned char)236;
long long int var_16 = -8600644173935723191LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
