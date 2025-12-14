#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)102;
unsigned char var_2 = (unsigned char)215;
unsigned short var_4 = (unsigned short)16232;
int var_5 = 933930462;
unsigned char var_6 = (unsigned char)59;
long long int var_7 = 1629244288873652329LL;
unsigned char var_8 = (unsigned char)143;
unsigned short var_9 = (unsigned short)23176;
unsigned char var_10 = (unsigned char)232;
unsigned int var_11 = 2886297097U;
short var_12 = (short)-10656;
unsigned long long int var_13 = 6043410431529094447ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 906128910U;
int var_22 = 53045149;
unsigned int var_23 = 2895943304U;
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
