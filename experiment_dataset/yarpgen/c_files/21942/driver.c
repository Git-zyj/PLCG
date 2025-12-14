#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)237;
long long int var_6 = -8343732778272113331LL;
unsigned int var_7 = 2952996454U;
short var_8 = (short)30340;
unsigned long long int var_9 = 2455166334903617600ULL;
short var_10 = (short)18424;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)14976;
int zero = 0;
short var_17 = (short)-17148;
int var_18 = -2036724946;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)244;
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
