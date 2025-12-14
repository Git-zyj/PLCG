#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-110;
unsigned int var_3 = 3607275049U;
unsigned short var_10 = (unsigned short)38132;
unsigned char var_15 = (unsigned char)43;
int zero = 0;
short var_19 = (short)26157;
long long int var_20 = -2737760696280757189LL;
long long int var_21 = -2868892081619020617LL;
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
