#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 989994101U;
int var_2 = -1156198194;
unsigned short var_4 = (unsigned short)32571;
unsigned char var_8 = (unsigned char)140;
unsigned int var_9 = 2746841859U;
long long int var_10 = 6136211395145832057LL;
int zero = 0;
unsigned long long int var_12 = 15846568492567448315ULL;
unsigned short var_13 = (unsigned short)24550;
void init() {
}

void checksum() {
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
