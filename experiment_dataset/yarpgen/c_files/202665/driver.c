#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)121;
_Bool var_6 = (_Bool)1;
int var_9 = -1779430454;
int zero = 0;
short var_10 = (short)-2249;
unsigned long long int var_11 = 2008716397213092723ULL;
int var_12 = -26795023;
long long int var_13 = 8432767953701966964LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
