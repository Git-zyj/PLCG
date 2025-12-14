#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13188;
unsigned int var_3 = 50094928U;
signed char var_4 = (signed char)-91;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_19 = (short)25668;
short var_20 = (short)-31246;
int var_21 = -2140103608;
long long int var_22 = 4957705396777050726LL;
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
