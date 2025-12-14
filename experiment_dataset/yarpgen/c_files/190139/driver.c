#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 325578885U;
unsigned short var_5 = (unsigned short)44393;
unsigned int var_8 = 3612229979U;
unsigned short var_10 = (unsigned short)17276;
unsigned long long int var_14 = 5893121596355061219ULL;
short var_17 = (short)-22315;
int zero = 0;
short var_18 = (short)28871;
_Bool var_19 = (_Bool)1;
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
