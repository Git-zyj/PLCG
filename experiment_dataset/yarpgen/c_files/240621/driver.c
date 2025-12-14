#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)161;
unsigned char var_13 = (unsigned char)45;
short var_17 = (short)-14034;
int zero = 0;
unsigned short var_18 = (unsigned short)4706;
unsigned short var_19 = (unsigned short)12222;
unsigned long long int var_20 = 16214801785835658809ULL;
_Bool var_21 = (_Bool)0;
int var_22 = 1882277570;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
