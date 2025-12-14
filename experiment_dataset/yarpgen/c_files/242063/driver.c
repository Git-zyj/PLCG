#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2526;
unsigned int var_3 = 3008794677U;
unsigned int var_4 = 1881257323U;
unsigned int var_5 = 3502131190U;
unsigned int var_8 = 3629017633U;
unsigned int var_10 = 3723212642U;
short var_11 = (short)-1960;
unsigned int var_15 = 3709937728U;
int zero = 0;
unsigned int var_18 = 63516522U;
unsigned int var_19 = 483304169U;
unsigned int var_20 = 4241407799U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
