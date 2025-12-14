#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 825945354U;
long long int var_17 = -2289123319870596223LL;
int var_18 = 1422972815;
int zero = 0;
unsigned short var_19 = (unsigned short)28108;
unsigned char var_20 = (unsigned char)31;
long long int var_21 = -7355523792354907329LL;
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
