#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -597216657;
long long int var_4 = 5595599916944145142LL;
short var_8 = (short)-28204;
short var_9 = (short)13813;
long long int var_13 = 1181168144480495665LL;
int zero = 0;
unsigned short var_17 = (unsigned short)38922;
unsigned char var_18 = (unsigned char)128;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
