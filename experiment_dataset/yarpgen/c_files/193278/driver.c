#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23736;
signed char var_3 = (signed char)-81;
long long int var_13 = -140767444960369057LL;
int zero = 0;
unsigned char var_18 = (unsigned char)37;
unsigned int var_19 = 622847835U;
short var_20 = (short)-12157;
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
