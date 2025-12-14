#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18317;
unsigned long long int var_3 = 8280460368437581395ULL;
short var_5 = (short)21649;
int zero = 0;
unsigned long long int var_19 = 9533263361752745505ULL;
unsigned char var_20 = (unsigned char)138;
short var_21 = (short)-23263;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
