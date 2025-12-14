#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)78;
unsigned char var_6 = (unsigned char)167;
unsigned long long int var_9 = 18238238959160055671ULL;
short var_10 = (short)-13857;
long long int var_12 = -7664155637331495112LL;
unsigned char var_13 = (unsigned char)42;
int zero = 0;
signed char var_18 = (signed char)97;
signed char var_19 = (signed char)-124;
void init() {
}

void checksum() {
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
