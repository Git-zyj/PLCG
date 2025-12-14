#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6306992537686217195LL;
long long int var_2 = -9083946048720274280LL;
unsigned int var_4 = 2559017967U;
unsigned char var_6 = (unsigned char)139;
unsigned char var_13 = (unsigned char)233;
int zero = 0;
unsigned int var_14 = 3670443722U;
unsigned char var_15 = (unsigned char)239;
unsigned char var_16 = (unsigned char)113;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
