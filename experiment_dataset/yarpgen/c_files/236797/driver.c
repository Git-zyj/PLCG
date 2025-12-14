#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
unsigned long long int var_3 = 10425408122947149165ULL;
long long int var_4 = 5659043665652439228LL;
unsigned char var_5 = (unsigned char)213;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-11796;
int var_9 = -157114030;
unsigned char var_10 = (unsigned char)36;
int zero = 0;
short var_11 = (short)-32258;
long long int var_12 = 1591632928963561975LL;
unsigned short var_13 = (unsigned short)1745;
unsigned int var_14 = 3149232617U;
unsigned short var_15 = (unsigned short)24352;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
