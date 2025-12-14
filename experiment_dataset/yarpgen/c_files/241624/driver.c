#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
short var_1 = (short)27279;
signed char var_2 = (signed char)12;
unsigned short var_4 = (unsigned short)60801;
short var_5 = (short)26070;
unsigned int var_7 = 1968985137U;
unsigned long long int var_10 = 18157434339880943730ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)45;
unsigned short var_12 = (unsigned short)16328;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
