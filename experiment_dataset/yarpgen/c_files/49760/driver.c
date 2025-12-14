#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)1;
int var_2 = 633313098;
int var_4 = -1491769414;
unsigned short var_5 = (unsigned short)22448;
unsigned short var_8 = (unsigned short)7897;
unsigned long long int var_9 = 14570851517769597456ULL;
long long int var_10 = -2863406598453191828LL;
unsigned short var_13 = (unsigned short)43319;
unsigned int var_16 = 1163941028U;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_19 = 1127307675;
unsigned char var_20 = (unsigned char)177;
short var_21 = (short)27366;
long long int var_22 = 1210833333001872737LL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
