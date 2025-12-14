#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8873154578104307375LL;
unsigned long long int var_8 = 4897321147582748427ULL;
unsigned char var_12 = (unsigned char)78;
unsigned char var_14 = (unsigned char)100;
int zero = 0;
unsigned short var_19 = (unsigned short)51753;
unsigned long long int var_20 = 11454162324169238800ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
