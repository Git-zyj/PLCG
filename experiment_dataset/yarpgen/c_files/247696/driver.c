#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20085;
_Bool var_3 = (_Bool)0;
int var_4 = -1906230296;
signed char var_10 = (signed char)-65;
int zero = 0;
long long int var_11 = -7323220635404871628LL;
short var_12 = (short)15218;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
