#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26797;
unsigned char var_6 = (unsigned char)77;
unsigned long long int var_8 = 6408497701571011522ULL;
int zero = 0;
unsigned long long int var_10 = 14110629713207018174ULL;
long long int var_11 = 7827853544574391911LL;
unsigned long long int var_12 = 18250495350992931481ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
