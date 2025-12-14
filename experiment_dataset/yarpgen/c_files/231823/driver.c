#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)5;
signed char var_2 = (signed char)-17;
long long int var_3 = -5919549224214583000LL;
signed char var_5 = (signed char)73;
short var_6 = (short)-2837;
short var_8 = (short)-20038;
int zero = 0;
unsigned int var_11 = 922033582U;
short var_12 = (short)-22145;
unsigned char var_13 = (unsigned char)107;
_Bool var_14 = (_Bool)1;
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
