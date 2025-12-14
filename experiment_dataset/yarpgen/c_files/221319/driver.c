#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3491006516U;
unsigned char var_2 = (unsigned char)45;
short var_4 = (short)-11865;
unsigned long long int var_6 = 6018671793922817755ULL;
unsigned int var_8 = 3657399903U;
unsigned char var_10 = (unsigned char)232;
signed char var_11 = (signed char)-31;
int zero = 0;
short var_13 = (short)-31983;
unsigned long long int var_14 = 9687268729671150015ULL;
long long int var_15 = -3787846328406529346LL;
unsigned long long int var_16 = 16705953028261152814ULL;
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
