#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2716725845014154238LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)59398;
int var_7 = 185312408;
unsigned char var_13 = (unsigned char)124;
unsigned short var_15 = (unsigned short)6988;
int zero = 0;
signed char var_17 = (signed char)35;
short var_18 = (short)-7182;
int var_19 = 1507504430;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
