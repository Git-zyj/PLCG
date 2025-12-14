#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)16846;
unsigned short var_3 = (unsigned short)33994;
unsigned short var_4 = (unsigned short)33934;
int var_5 = 1141689426;
unsigned int var_6 = 359714424U;
long long int var_9 = -2091197513182520168LL;
long long int var_10 = 8021746377440710258LL;
unsigned int var_12 = 189991149U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
long long int var_15 = 5219393471975430068LL;
unsigned int var_16 = 2848828788U;
int zero = 0;
unsigned char var_17 = (unsigned char)85;
short var_18 = (short)-31868;
int var_19 = 1739080729;
unsigned char var_20 = (unsigned char)151;
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
