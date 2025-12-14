#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-90;
unsigned short var_11 = (unsigned short)48965;
int zero = 0;
long long int var_14 = -4578054586615190124LL;
long long int var_15 = 5188656858767648649LL;
unsigned short var_16 = (unsigned short)8026;
void init() {
}

void checksum() {
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
