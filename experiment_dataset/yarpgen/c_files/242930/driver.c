#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12795578278504917288ULL;
unsigned int var_4 = 4128146080U;
short var_10 = (short)-24614;
unsigned char var_11 = (unsigned char)107;
int zero = 0;
unsigned long long int var_13 = 6368645245113572172ULL;
unsigned long long int var_14 = 16515623430144005076ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
