#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4804518450660544128LL;
unsigned char var_7 = (unsigned char)76;
int zero = 0;
unsigned short var_10 = (unsigned short)21362;
unsigned int var_11 = 61450099U;
unsigned long long int var_12 = 5376794415836040726ULL;
unsigned short var_13 = (unsigned short)7392;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
