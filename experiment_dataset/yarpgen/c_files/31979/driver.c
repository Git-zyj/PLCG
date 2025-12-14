#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_4 = -1277845165;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)4340;
long long int var_14 = -6414136227120501871LL;
long long int var_18 = 5338625060777001381LL;
short var_19 = (short)1801;
int zero = 0;
short var_20 = (short)-28962;
unsigned short var_21 = (unsigned short)23510;
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
