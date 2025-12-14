#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)11298;
unsigned long long int var_12 = 9632576395421863690ULL;
int zero = 0;
long long int var_16 = -240938153583799149LL;
signed char var_17 = (signed char)8;
long long int var_18 = 4238006935437699796LL;
void init() {
}

void checksum() {
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
