#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19111;
short var_2 = (short)-30221;
unsigned int var_3 = 94166524U;
short var_7 = (short)1002;
unsigned short var_8 = (unsigned short)28078;
unsigned short var_9 = (unsigned short)10664;
_Bool var_10 = (_Bool)1;
long long int var_13 = -4213278646525283747LL;
int var_15 = -1294544210;
int zero = 0;
unsigned char var_16 = (unsigned char)129;
unsigned int var_17 = 1273897053U;
unsigned int var_18 = 2748481771U;
unsigned int var_19 = 3303744737U;
unsigned long long int var_20 = 3382199838317594204ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
