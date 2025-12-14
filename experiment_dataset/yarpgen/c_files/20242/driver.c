#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-7;
unsigned char var_17 = (unsigned char)61;
unsigned char var_19 = (unsigned char)37;
int zero = 0;
signed char var_20 = (signed char)111;
signed char var_21 = (signed char)92;
short var_22 = (short)-26824;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
