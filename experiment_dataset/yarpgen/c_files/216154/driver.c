#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)56;
long long int var_12 = 3596886266151745071LL;
signed char var_16 = (signed char)97;
int zero = 0;
short var_17 = (short)17772;
long long int var_18 = 4275686951177109863LL;
short var_19 = (short)-28520;
long long int var_20 = -2037568518455714678LL;
signed char var_21 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
