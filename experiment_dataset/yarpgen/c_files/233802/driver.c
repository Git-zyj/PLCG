#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)69;
unsigned long long int var_15 = 9804720490896186317ULL;
int var_16 = -1414351136;
int zero = 0;
unsigned char var_19 = (unsigned char)8;
unsigned short var_20 = (unsigned short)31190;
unsigned short var_21 = (unsigned short)37897;
void init() {
}

void checksum() {
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
