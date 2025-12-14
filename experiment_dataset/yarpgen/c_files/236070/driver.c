#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
int var_7 = 1451488390;
short var_8 = (short)19457;
unsigned short var_11 = (unsigned short)59776;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)21127;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)253;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
