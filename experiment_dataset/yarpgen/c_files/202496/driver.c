#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1940438630;
long long int var_2 = 2585224500213621524LL;
unsigned char var_3 = (unsigned char)136;
signed char var_6 = (signed char)32;
unsigned long long int var_11 = 1426900352525732719ULL;
short var_12 = (short)29789;
int var_17 = 1832408466;
int zero = 0;
unsigned int var_18 = 3166467698U;
signed char var_19 = (signed char)83;
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
