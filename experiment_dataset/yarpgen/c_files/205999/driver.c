#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)99;
unsigned short var_6 = (unsigned short)46389;
unsigned short var_7 = (unsigned short)12638;
signed char var_8 = (signed char)-27;
int zero = 0;
signed char var_14 = (signed char)-120;
int var_15 = 301235313;
unsigned short var_16 = (unsigned short)25706;
unsigned int var_17 = 2799842550U;
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
