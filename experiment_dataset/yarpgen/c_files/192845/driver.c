#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30068;
short var_2 = (short)-22873;
signed char var_8 = (signed char)-76;
unsigned char var_9 = (unsigned char)209;
short var_11 = (short)-8634;
unsigned long long int var_13 = 3712272545402404098ULL;
unsigned long long int var_14 = 85652952210296254ULL;
unsigned long long int var_16 = 10264191655150099585ULL;
int zero = 0;
short var_20 = (short)20435;
short var_21 = (short)-14934;
void init() {
}

void checksum() {
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
