#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52729;
unsigned long long int var_4 = 15283545280857569920ULL;
unsigned short var_6 = (unsigned short)24858;
int zero = 0;
unsigned short var_10 = (unsigned short)43131;
unsigned short var_11 = (unsigned short)11933;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
