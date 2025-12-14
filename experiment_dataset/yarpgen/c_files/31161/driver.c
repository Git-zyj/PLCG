#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16139;
unsigned short var_2 = (unsigned short)12476;
signed char var_3 = (signed char)105;
signed char var_6 = (signed char)13;
short var_10 = (short)18083;
int zero = 0;
short var_12 = (short)1414;
unsigned short var_13 = (unsigned short)29229;
short var_14 = (short)18824;
void init() {
}

void checksum() {
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
