#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 716017278U;
unsigned int var_3 = 537649481U;
unsigned long long int var_5 = 16301418539080276812ULL;
int var_7 = 1326602268;
signed char var_14 = (signed char)90;
unsigned long long int var_15 = 7038550703072353585ULL;
int zero = 0;
unsigned long long int var_16 = 7771583580592296618ULL;
signed char var_17 = (signed char)-79;
signed char var_18 = (signed char)-112;
short var_19 = (short)2325;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
