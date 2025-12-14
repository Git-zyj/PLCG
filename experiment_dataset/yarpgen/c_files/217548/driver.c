#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8597833070727027624LL;
unsigned int var_2 = 1280934278U;
unsigned int var_3 = 2187698630U;
unsigned short var_4 = (unsigned short)5120;
unsigned int var_5 = 1767933875U;
long long int var_7 = -3608610133728262371LL;
unsigned short var_12 = (unsigned short)61246;
unsigned long long int var_13 = 606517191368469431ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)21019;
short var_16 = (short)8628;
void init() {
}

void checksum() {
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
