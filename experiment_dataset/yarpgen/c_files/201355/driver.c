#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27922;
unsigned int var_3 = 1783742614U;
unsigned char var_4 = (unsigned char)138;
unsigned short var_9 = (unsigned short)12114;
unsigned short var_10 = (unsigned short)24914;
unsigned short var_12 = (unsigned short)10578;
int zero = 0;
unsigned short var_13 = (unsigned short)21787;
unsigned int var_14 = 2862496324U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
