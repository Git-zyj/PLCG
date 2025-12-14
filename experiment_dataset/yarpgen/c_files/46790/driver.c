#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
unsigned int var_2 = 700973803U;
int var_3 = 1891862253;
signed char var_5 = (signed char)109;
short var_7 = (short)-27571;
unsigned char var_8 = (unsigned char)141;
short var_9 = (short)-23269;
int zero = 0;
unsigned char var_10 = (unsigned char)156;
unsigned int var_11 = 1965971846U;
unsigned char var_12 = (unsigned char)96;
unsigned int var_13 = 2546314746U;
unsigned char var_14 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
