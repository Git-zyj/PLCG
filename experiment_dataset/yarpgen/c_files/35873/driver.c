#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2350152433U;
unsigned char var_3 = (unsigned char)129;
signed char var_13 = (signed char)91;
unsigned int var_15 = 390697398U;
signed char var_17 = (signed char)-86;
int zero = 0;
signed char var_19 = (signed char)64;
unsigned short var_20 = (unsigned short)50647;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)61386;
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
