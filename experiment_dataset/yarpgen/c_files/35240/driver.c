#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16207601712898064246ULL;
int var_7 = 239318940;
unsigned char var_12 = (unsigned char)206;
short var_14 = (short)-16394;
int zero = 0;
short var_18 = (short)-7237;
short var_19 = (short)-17115;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
