#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
long long int var_1 = -5519144335866413182LL;
signed char var_3 = (signed char)0;
int var_8 = -469506091;
int var_9 = -2015902824;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-17728;
void init() {
}

void checksum() {
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
