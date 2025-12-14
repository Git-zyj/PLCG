#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26589;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-33;
unsigned char var_7 = (unsigned char)193;
unsigned short var_9 = (unsigned short)6919;
short var_11 = (short)5436;
int zero = 0;
unsigned long long int var_14 = 2410042855595880106ULL;
unsigned char var_15 = (unsigned char)201;
unsigned int var_16 = 2097706934U;
unsigned char var_17 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
