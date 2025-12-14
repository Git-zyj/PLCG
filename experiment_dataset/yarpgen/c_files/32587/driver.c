#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)243;
signed char var_4 = (signed char)-105;
short var_5 = (short)27507;
int zero = 0;
short var_13 = (short)10845;
unsigned int var_14 = 3214301212U;
int var_15 = 1397880624;
unsigned int var_16 = 3368129324U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
