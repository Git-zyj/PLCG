#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-83;
signed char var_7 = (signed char)6;
unsigned char var_11 = (unsigned char)116;
signed char var_12 = (signed char)-63;
unsigned char var_15 = (unsigned char)240;
int var_16 = -335023967;
int zero = 0;
unsigned char var_18 = (unsigned char)78;
signed char var_19 = (signed char)-61;
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
