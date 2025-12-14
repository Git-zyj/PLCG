#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
unsigned short var_5 = (unsigned short)1891;
unsigned char var_9 = (unsigned char)109;
unsigned short var_11 = (unsigned short)25035;
int zero = 0;
unsigned short var_16 = (unsigned short)58427;
unsigned char var_17 = (unsigned char)109;
unsigned long long int var_18 = 14290432038450270062ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
