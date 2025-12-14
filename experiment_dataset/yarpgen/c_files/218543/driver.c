#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)36;
signed char var_6 = (signed char)-38;
unsigned long long int var_10 = 14007065777320427233ULL;
short var_12 = (short)17;
int var_13 = 2001980236;
unsigned char var_14 = (unsigned char)49;
unsigned short var_17 = (unsigned short)4186;
int zero = 0;
signed char var_20 = (signed char)-107;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-22298;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
