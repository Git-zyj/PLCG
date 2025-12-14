#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = -1098785737;
_Bool var_8 = (_Bool)1;
unsigned short var_12 = (unsigned short)54718;
long long int var_15 = -9033956475690078217LL;
int zero = 0;
short var_17 = (short)8401;
short var_18 = (short)19684;
signed char var_19 = (signed char)40;
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
