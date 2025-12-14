#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31983;
unsigned char var_2 = (unsigned char)11;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)54;
long long int var_9 = -7438426627636226606LL;
int zero = 0;
int var_10 = -755906885;
unsigned long long int var_11 = 10819591968116951328ULL;
unsigned char var_12 = (unsigned char)97;
unsigned char var_13 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
