#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-113;
short var_3 = (short)7722;
short var_8 = (short)8263;
short var_11 = (short)3178;
int zero = 0;
unsigned char var_15 = (unsigned char)39;
signed char var_16 = (signed char)78;
unsigned char var_17 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
