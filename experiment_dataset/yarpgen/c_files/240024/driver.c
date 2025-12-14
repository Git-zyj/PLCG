#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
unsigned short var_1 = (unsigned short)24252;
long long int var_3 = -4633675355421993581LL;
unsigned long long int var_6 = 4042859554777810281ULL;
long long int var_9 = 277519744442065358LL;
unsigned int var_10 = 3572289757U;
short var_11 = (short)6615;
unsigned int var_12 = 4265912548U;
unsigned int var_13 = 3007499401U;
_Bool var_14 = (_Bool)0;
long long int var_15 = -5592231239229099058LL;
unsigned short var_16 = (unsigned short)46712;
signed char var_17 = (signed char)37;
int zero = 0;
int var_18 = 1186790016;
short var_19 = (short)-4520;
long long int var_20 = -4121769269908572278LL;
unsigned short var_21 = (unsigned short)27889;
short var_22 = (short)137;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
