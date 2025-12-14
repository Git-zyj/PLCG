#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned char var_1 = (unsigned char)230;
short var_4 = (short)5466;
long long int var_8 = -2540545548302824187LL;
unsigned char var_9 = (unsigned char)245;
int zero = 0;
short var_10 = (short)-16338;
short var_11 = (short)9874;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
