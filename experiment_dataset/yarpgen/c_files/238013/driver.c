#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)87;
unsigned char var_4 = (unsigned char)97;
unsigned short var_10 = (unsigned short)12490;
long long int var_13 = 7968223456118312740LL;
int zero = 0;
unsigned long long int var_14 = 17398938541815729365ULL;
short var_15 = (short)21876;
void init() {
}

void checksum() {
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
