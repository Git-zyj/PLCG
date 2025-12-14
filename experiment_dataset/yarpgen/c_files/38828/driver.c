#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 93196946;
unsigned short var_9 = (unsigned short)13914;
unsigned long long int var_13 = 18242731643612990568ULL;
int var_14 = -1880066690;
int zero = 0;
long long int var_15 = -1995868388731008979LL;
unsigned char var_16 = (unsigned char)72;
int var_17 = 920880116;
signed char var_18 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
