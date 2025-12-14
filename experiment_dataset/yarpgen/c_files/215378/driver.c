#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)9;
unsigned long long int var_5 = 15832506021173683345ULL;
unsigned int var_7 = 3484210953U;
signed char var_10 = (signed char)62;
short var_13 = (short)-6269;
int zero = 0;
short var_15 = (short)-27072;
unsigned char var_16 = (unsigned char)182;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-13799;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
