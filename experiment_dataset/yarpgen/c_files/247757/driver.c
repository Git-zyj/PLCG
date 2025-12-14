#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3807904235438320369LL;
short var_7 = (short)21717;
long long int var_9 = -7566580474955308311LL;
signed char var_14 = (signed char)24;
signed char var_15 = (signed char)11;
int zero = 0;
unsigned short var_18 = (unsigned short)2350;
long long int var_19 = 4135087456682672439LL;
long long int var_20 = 1928717789782031293LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
