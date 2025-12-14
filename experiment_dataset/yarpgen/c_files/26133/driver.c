#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1293415512;
signed char var_1 = (signed char)-38;
unsigned char var_2 = (unsigned char)53;
short var_3 = (short)24307;
unsigned long long int var_5 = 17835574607453709205ULL;
unsigned int var_7 = 2498663226U;
signed char var_8 = (signed char)-111;
long long int var_9 = -2803349808614928491LL;
unsigned short var_10 = (unsigned short)18256;
int zero = 0;
long long int var_11 = 8951063745859960716LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 16741452472823824133ULL;
unsigned int var_14 = 2949947616U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
