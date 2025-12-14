#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)11;
unsigned int var_13 = 1363405816U;
unsigned short var_15 = (unsigned short)54409;
short var_19 = (short)-148;
int zero = 0;
unsigned int var_20 = 3358854073U;
unsigned char var_21 = (unsigned char)193;
unsigned char var_22 = (unsigned char)20;
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
