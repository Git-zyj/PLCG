#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1630574185U;
short var_2 = (short)13742;
int var_4 = 694636371;
unsigned char var_13 = (unsigned char)160;
int zero = 0;
unsigned short var_20 = (unsigned short)57323;
unsigned short var_21 = (unsigned short)7555;
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
