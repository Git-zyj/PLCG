#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)191;
int var_5 = 1162735374;
unsigned short var_8 = (unsigned short)2960;
int var_9 = -1068562393;
unsigned char var_10 = (unsigned char)99;
unsigned char var_11 = (unsigned char)157;
int zero = 0;
unsigned long long int var_15 = 3929671076368866469ULL;
unsigned short var_16 = (unsigned short)22927;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
