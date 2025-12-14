#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9419401022530410275ULL;
unsigned short var_5 = (unsigned short)48499;
unsigned short var_8 = (unsigned short)51808;
short var_9 = (short)-27142;
long long int var_10 = -7871168637287608383LL;
int zero = 0;
unsigned int var_11 = 1375318233U;
unsigned char var_12 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
