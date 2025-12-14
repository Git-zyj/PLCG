#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
short var_3 = (short)23236;
unsigned int var_4 = 76351541U;
unsigned short var_6 = (unsigned short)3968;
unsigned short var_8 = (unsigned short)37079;
signed char var_14 = (signed char)88;
int zero = 0;
short var_20 = (short)21330;
int var_21 = 1163630707;
void init() {
}

void checksum() {
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
