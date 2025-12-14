#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24578;
unsigned short var_4 = (unsigned short)52242;
signed char var_5 = (signed char)99;
signed char var_9 = (signed char)105;
signed char var_18 = (signed char)21;
int zero = 0;
short var_20 = (short)10094;
unsigned short var_21 = (unsigned short)28393;
void init() {
}

void checksum() {
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
