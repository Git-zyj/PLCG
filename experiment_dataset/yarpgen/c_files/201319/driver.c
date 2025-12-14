#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)218;
signed char var_7 = (signed char)2;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-4636;
short var_13 = (short)17113;
signed char var_14 = (signed char)88;
int zero = 0;
int var_17 = -1498475196;
unsigned int var_18 = 3745742041U;
unsigned short var_19 = (unsigned short)8599;
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
