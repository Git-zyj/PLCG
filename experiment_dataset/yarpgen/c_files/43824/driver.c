#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11240642688267619871ULL;
long long int var_1 = 3325377025541329510LL;
unsigned char var_5 = (unsigned char)130;
unsigned long long int var_6 = 304902956838298819ULL;
unsigned short var_10 = (unsigned short)21236;
long long int var_12 = -5411519034065784607LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-4;
short var_18 = (short)-28757;
unsigned char var_19 = (unsigned char)73;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 2944350116658360899LL;
short var_22 = (short)24404;
unsigned int var_23 = 1619859674U;
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
