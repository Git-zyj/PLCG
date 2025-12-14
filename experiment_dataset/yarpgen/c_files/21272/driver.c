#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
short var_1 = (short)5298;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)174;
long long int var_9 = -4232895721957667824LL;
int zero = 0;
signed char var_11 = (signed char)37;
short var_12 = (short)-24558;
unsigned char var_13 = (unsigned char)79;
signed char var_14 = (signed char)-105;
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
