#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)165;
long long int var_3 = -4274800859034618450LL;
unsigned int var_5 = 2836169317U;
unsigned char var_8 = (unsigned char)49;
int zero = 0;
signed char var_10 = (signed char)107;
signed char var_11 = (signed char)-104;
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
