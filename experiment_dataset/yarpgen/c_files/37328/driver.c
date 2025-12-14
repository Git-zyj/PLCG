#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6504;
unsigned long long int var_3 = 1944930926360842640ULL;
int var_4 = 347619021;
unsigned char var_8 = (unsigned char)126;
unsigned int var_9 = 612138834U;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 7498045837796508245ULL;
unsigned long long int var_13 = 9445154913736837767ULL;
void init() {
}

void checksum() {
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
