#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)124;
short var_2 = (short)25397;
unsigned int var_5 = 3717859601U;
unsigned int var_6 = 946423885U;
unsigned int var_8 = 3637651982U;
int zero = 0;
long long int var_13 = 4910698956878246762LL;
unsigned char var_14 = (unsigned char)226;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
