#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20150;
short var_2 = (short)14409;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)113;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_11 = (short)4776;
unsigned int var_12 = 1135065241U;
short var_13 = (short)22339;
unsigned long long int var_14 = 16187687835127282338ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
