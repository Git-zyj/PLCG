#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12942;
unsigned short var_1 = (unsigned short)43351;
int var_2 = -1420728322;
unsigned long long int var_3 = 6999139416367581074ULL;
unsigned short var_4 = (unsigned short)58828;
unsigned short var_9 = (unsigned short)16567;
unsigned char var_11 = (unsigned char)135;
int zero = 0;
signed char var_14 = (signed char)-8;
unsigned int var_15 = 2341312612U;
unsigned char var_16 = (unsigned char)30;
unsigned char var_17 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
