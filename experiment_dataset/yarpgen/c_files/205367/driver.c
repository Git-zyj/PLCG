#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24173;
long long int var_6 = -6539999227300332071LL;
short var_10 = (short)7947;
unsigned int var_13 = 887293978U;
signed char var_17 = (signed char)-9;
int zero = 0;
short var_18 = (short)-28526;
unsigned char var_19 = (unsigned char)130;
void init() {
}

void checksum() {
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
