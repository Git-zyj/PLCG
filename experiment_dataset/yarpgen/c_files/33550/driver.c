#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)226;
unsigned short var_10 = (unsigned short)842;
unsigned short var_12 = (unsigned short)40111;
unsigned int var_13 = 2734765172U;
int zero = 0;
signed char var_17 = (signed char)115;
short var_18 = (short)4674;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
