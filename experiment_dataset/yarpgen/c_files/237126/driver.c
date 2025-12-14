#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)1;
unsigned long long int var_2 = 2347522662505614219ULL;
signed char var_5 = (signed char)-106;
signed char var_6 = (signed char)-12;
unsigned long long int var_7 = 15826739571933210022ULL;
short var_8 = (short)-2369;
short var_11 = (short)3357;
int zero = 0;
unsigned long long int var_12 = 6069348689397675039ULL;
short var_13 = (short)-30996;
signed char var_14 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
