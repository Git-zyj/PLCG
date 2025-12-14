#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -266557330;
unsigned long long int var_1 = 11458328847909119041ULL;
signed char var_2 = (signed char)-18;
unsigned char var_3 = (unsigned char)103;
short var_7 = (short)-24036;
signed char var_10 = (signed char)87;
int zero = 0;
unsigned long long int var_11 = 3679844285210425196ULL;
signed char var_12 = (signed char)42;
short var_13 = (short)-21857;
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
