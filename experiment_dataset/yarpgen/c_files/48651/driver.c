#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52234;
signed char var_2 = (signed char)-108;
unsigned short var_4 = (unsigned short)55132;
int zero = 0;
unsigned long long int var_11 = 11513419008433224113ULL;
unsigned long long int var_12 = 1527705740316375131ULL;
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
