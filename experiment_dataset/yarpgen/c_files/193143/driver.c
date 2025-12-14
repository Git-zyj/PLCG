#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2807696441U;
unsigned short var_5 = (unsigned short)53000;
unsigned char var_13 = (unsigned char)164;
int zero = 0;
unsigned short var_14 = (unsigned short)15018;
unsigned int var_15 = 921519487U;
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
