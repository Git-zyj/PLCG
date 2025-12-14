#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)136;
signed char var_5 = (signed char)-6;
short var_6 = (short)21731;
int var_8 = -1629387230;
unsigned char var_13 = (unsigned char)102;
int zero = 0;
signed char var_14 = (signed char)-83;
int var_15 = -1217927380;
void init() {
}

void checksum() {
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
