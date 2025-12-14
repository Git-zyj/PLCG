#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-38;
int var_4 = -239923014;
int var_5 = -824569950;
long long int var_10 = 3631920350910273175LL;
signed char var_12 = (signed char)-42;
int zero = 0;
unsigned char var_17 = (unsigned char)86;
signed char var_18 = (signed char)69;
unsigned char var_19 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
