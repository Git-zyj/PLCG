#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1068147141U;
unsigned int var_8 = 3618745694U;
unsigned short var_9 = (unsigned short)46000;
int zero = 0;
short var_13 = (short)23640;
unsigned char var_14 = (unsigned char)132;
signed char var_15 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
