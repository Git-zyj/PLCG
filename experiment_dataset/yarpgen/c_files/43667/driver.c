#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)107;
unsigned short var_6 = (unsigned short)40126;
long long int var_9 = -187615010707384388LL;
signed char var_10 = (signed char)72;
short var_19 = (short)6264;
int zero = 0;
int var_20 = -1595953745;
short var_21 = (short)21785;
unsigned short var_22 = (unsigned short)48111;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)52368;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
