#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -192352997;
unsigned long long int var_5 = 7484741736004075607ULL;
short var_12 = (short)5015;
int zero = 0;
unsigned short var_16 = (unsigned short)14119;
unsigned char var_17 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
