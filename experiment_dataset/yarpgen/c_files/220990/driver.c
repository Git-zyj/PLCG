#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2811620203722382243LL;
signed char var_7 = (signed char)124;
unsigned char var_10 = (unsigned char)228;
long long int var_14 = 1969094237264572831LL;
int zero = 0;
unsigned int var_15 = 1514833513U;
long long int var_16 = -6649498785400084781LL;
void init() {
}

void checksum() {
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
