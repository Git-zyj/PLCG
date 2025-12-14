#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
signed char var_2 = (signed char)-1;
signed char var_8 = (signed char)126;
unsigned char var_10 = (unsigned char)158;
unsigned char var_11 = (unsigned char)71;
signed char var_14 = (signed char)-31;
int zero = 0;
signed char var_15 = (signed char)116;
unsigned char var_16 = (unsigned char)18;
signed char var_17 = (signed char)47;
signed char var_18 = (signed char)-84;
unsigned char var_19 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
