#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)18;
unsigned short var_5 = (unsigned short)18445;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 5335931280649698817ULL;
int zero = 0;
int var_10 = -491761630;
int var_11 = -104954008;
unsigned char var_12 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
