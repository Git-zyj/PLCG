#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 2030679490;
unsigned short var_4 = (unsigned short)43775;
int var_5 = 1212618255;
unsigned int var_9 = 3991423673U;
int zero = 0;
long long int var_12 = -6725472518771143602LL;
signed char var_13 = (signed char)-15;
unsigned short var_14 = (unsigned short)56940;
short var_15 = (short)3538;
void init() {
}

void checksum() {
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
