#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26188;
long long int var_6 = 8615901557477525625LL;
short var_8 = (short)14593;
int zero = 0;
long long int var_15 = 7780378405623997280LL;
unsigned char var_16 = (unsigned char)59;
long long int var_17 = -3092552166278218005LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
