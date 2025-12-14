#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_5 = (short)-17356;
unsigned short var_8 = (unsigned short)17537;
signed char var_9 = (signed char)-66;
long long int var_10 = -3647704924364428760LL;
unsigned long long int var_11 = 3917994710060103452ULL;
int zero = 0;
signed char var_14 = (signed char)37;
unsigned short var_15 = (unsigned short)65424;
short var_16 = (short)-14967;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
