#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1104348205;
short var_5 = (short)-31643;
short var_8 = (short)5229;
unsigned short var_10 = (unsigned short)34514;
short var_12 = (short)672;
long long int var_15 = 6747682004098790303LL;
long long int var_17 = 342546222572645039LL;
unsigned int var_18 = 3846431519U;
int zero = 0;
int var_20 = -1235288201;
long long int var_21 = -8764129942456465986LL;
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
