#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6329;
unsigned char var_2 = (unsigned char)235;
unsigned char var_3 = (unsigned char)12;
long long int var_6 = 3531084115327792225LL;
int var_8 = -1716423465;
unsigned long long int var_9 = 12945463428952463393ULL;
unsigned char var_10 = (unsigned char)147;
int zero = 0;
unsigned short var_12 = (unsigned short)23826;
unsigned short var_13 = (unsigned short)10562;
long long int var_14 = 7189779386574260050LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
