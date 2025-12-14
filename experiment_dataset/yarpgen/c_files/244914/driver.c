#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5322468671271663423LL;
long long int var_17 = -312044641164795880LL;
unsigned int var_18 = 3835159553U;
int zero = 0;
unsigned char var_20 = (unsigned char)114;
short var_21 = (short)-5921;
unsigned short var_22 = (unsigned short)14015;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
