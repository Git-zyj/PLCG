#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-40;
unsigned short var_3 = (unsigned short)54859;
unsigned char var_4 = (unsigned char)254;
unsigned long long int var_5 = 12652568865702832173ULL;
signed char var_7 = (signed char)25;
long long int var_8 = -5763710915076576502LL;
int var_10 = -400280548;
int zero = 0;
unsigned char var_11 = (unsigned char)24;
unsigned char var_12 = (unsigned char)90;
long long int var_13 = -2760637699879722789LL;
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
