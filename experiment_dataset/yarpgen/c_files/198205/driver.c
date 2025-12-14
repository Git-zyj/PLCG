#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-8691;
unsigned char var_7 = (unsigned char)156;
long long int var_16 = -8785695471262791703LL;
unsigned int var_17 = 3227357214U;
int zero = 0;
short var_20 = (short)-16297;
long long int var_21 = -7434906127233686411LL;
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
