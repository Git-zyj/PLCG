#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
unsigned int var_3 = 3553284289U;
unsigned long long int var_6 = 12997795939860931448ULL;
short var_7 = (short)-30302;
unsigned long long int var_8 = 5493771092275653203ULL;
unsigned long long int var_10 = 12263157385110370027ULL;
short var_13 = (short)8021;
unsigned int var_14 = 1642100099U;
unsigned long long int var_15 = 5491375637053549412ULL;
unsigned long long int var_16 = 1095638843068051985ULL;
int zero = 0;
short var_18 = (short)-13120;
unsigned char var_19 = (unsigned char)37;
long long int var_20 = -8419250010529622560LL;
short var_21 = (short)-13192;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
