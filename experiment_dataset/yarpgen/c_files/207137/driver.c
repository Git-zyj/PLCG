#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23598;
unsigned long long int var_4 = 9775923219424364660ULL;
signed char var_5 = (signed char)-7;
unsigned int var_6 = 963710507U;
short var_10 = (short)12036;
int zero = 0;
unsigned int var_12 = 1324570656U;
unsigned int var_13 = 2493129662U;
void init() {
}

void checksum() {
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
