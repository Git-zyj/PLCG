#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1040430744;
unsigned int var_4 = 4243503680U;
short var_7 = (short)17248;
unsigned short var_8 = (unsigned short)23454;
signed char var_9 = (signed char)-66;
unsigned short var_10 = (unsigned short)1428;
int zero = 0;
unsigned char var_11 = (unsigned char)40;
short var_12 = (short)31450;
void init() {
}

void checksum() {
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
