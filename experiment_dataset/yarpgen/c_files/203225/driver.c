#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61006;
signed char var_5 = (signed char)29;
unsigned char var_7 = (unsigned char)59;
unsigned char var_9 = (unsigned char)50;
unsigned int var_18 = 1779354538U;
int zero = 0;
signed char var_20 = (signed char)111;
short var_21 = (short)30081;
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
