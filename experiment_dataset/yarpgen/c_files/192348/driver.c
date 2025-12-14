#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5949;
signed char var_2 = (signed char)99;
unsigned short var_7 = (unsigned short)53426;
long long int var_8 = 618779481936389479LL;
int zero = 0;
unsigned char var_12 = (unsigned char)172;
unsigned short var_13 = (unsigned short)16823;
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
