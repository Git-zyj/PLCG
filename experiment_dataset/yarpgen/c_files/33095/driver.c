#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)31921;
int var_7 = -1733238170;
int var_11 = 1620986633;
_Bool var_15 = (_Bool)1;
int var_16 = 1963566081;
long long int var_17 = -548450969476915946LL;
short var_18 = (short)-21976;
int zero = 0;
short var_19 = (short)23738;
unsigned char var_20 = (unsigned char)93;
void init() {
}

void checksum() {
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
