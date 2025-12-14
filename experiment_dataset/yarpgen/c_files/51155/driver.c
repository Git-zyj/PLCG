#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)177;
short var_8 = (short)-18577;
unsigned int var_9 = 2836105443U;
unsigned char var_19 = (unsigned char)184;
int zero = 0;
unsigned char var_20 = (unsigned char)92;
unsigned int var_21 = 3551408247U;
unsigned char var_22 = (unsigned char)142;
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
