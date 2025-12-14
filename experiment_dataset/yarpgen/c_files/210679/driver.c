#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
unsigned char var_2 = (unsigned char)86;
signed char var_5 = (signed char)-125;
int var_6 = 462621902;
unsigned int var_10 = 3982073172U;
int zero = 0;
int var_13 = 1829421777;
unsigned char var_14 = (unsigned char)254;
void init() {
}

void checksum() {
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
