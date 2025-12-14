#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)234;
short var_7 = (short)26222;
long long int var_9 = 8302986131735268970LL;
unsigned char var_13 = (unsigned char)152;
int zero = 0;
int var_17 = -944301456;
short var_18 = (short)2349;
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
