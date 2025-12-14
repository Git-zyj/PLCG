#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3216181272U;
_Bool var_1 = (_Bool)0;
long long int var_2 = 618095146962871228LL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)8430;
long long int var_5 = -960598145731240253LL;
unsigned int var_6 = 4180728441U;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)17201;
unsigned char var_10 = (unsigned char)122;
int zero = 0;
unsigned char var_11 = (unsigned char)184;
unsigned int var_12 = 1718140186U;
int var_13 = 537360280;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
