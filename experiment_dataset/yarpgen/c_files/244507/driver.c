#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 947910766;
unsigned long long int var_3 = 10766958774374153917ULL;
unsigned long long int var_4 = 10837429064585605015ULL;
int var_13 = -50494062;
unsigned char var_17 = (unsigned char)178;
_Bool var_18 = (_Bool)1;
int var_19 = -152244895;
int zero = 0;
unsigned char var_20 = (unsigned char)208;
long long int var_21 = -3250856424430169829LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
