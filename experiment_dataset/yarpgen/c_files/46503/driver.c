#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4176;
short var_2 = (short)-11306;
unsigned long long int var_4 = 17215052813559551670ULL;
unsigned short var_7 = (unsigned short)59198;
short var_9 = (short)3053;
signed char var_11 = (signed char)21;
signed char var_12 = (signed char)-33;
int zero = 0;
unsigned short var_13 = (unsigned short)64985;
int var_14 = 1554261504;
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
