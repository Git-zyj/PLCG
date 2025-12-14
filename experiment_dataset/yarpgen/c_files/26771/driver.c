#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 489903562U;
short var_7 = (short)8342;
long long int var_11 = 8669885977733151496LL;
unsigned char var_13 = (unsigned char)100;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
