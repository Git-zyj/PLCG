#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_8 = -499095675;
unsigned short var_9 = (unsigned short)44882;
short var_11 = (short)16461;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_20 = 1417256660;
short var_21 = (short)-3383;
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
