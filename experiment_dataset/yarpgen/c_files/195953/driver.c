#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1723145313343202410LL;
int var_2 = -997066317;
short var_3 = (short)8785;
signed char var_5 = (signed char)-21;
int var_6 = -1518493091;
unsigned int var_7 = 1570367144U;
_Bool var_8 = (_Bool)0;
short var_9 = (short)1323;
unsigned long long int var_10 = 9684287174216499055ULL;
unsigned char var_11 = (unsigned char)22;
int zero = 0;
signed char var_12 = (signed char)-80;
unsigned short var_13 = (unsigned short)266;
unsigned char var_14 = (unsigned char)107;
int var_15 = -1587052306;
short var_16 = (short)20004;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
