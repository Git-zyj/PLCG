#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1921259128;
unsigned char var_8 = (unsigned char)101;
unsigned short var_9 = (unsigned short)21872;
int zero = 0;
long long int var_13 = 2080205318588036215LL;
short var_14 = (short)-31007;
long long int var_15 = 797714708080832130LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
