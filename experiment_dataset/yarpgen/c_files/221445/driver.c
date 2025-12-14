#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)103;
unsigned long long int var_3 = 16115140545535525014ULL;
signed char var_4 = (signed char)15;
signed char var_6 = (signed char)24;
unsigned short var_8 = (unsigned short)11637;
int zero = 0;
long long int var_20 = -8819319915386674075LL;
unsigned short var_21 = (unsigned short)62037;
void init() {
}

void checksum() {
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
