#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -763158132;
int var_11 = -1210087675;
long long int var_12 = -1431506092981754737LL;
int var_13 = 1388175440;
long long int var_16 = 8967325220284822158LL;
int var_17 = 1667131704;
short var_18 = (short)14101;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)3435;
unsigned char var_21 = (unsigned char)201;
int var_22 = -970469703;
short var_23 = (short)-7666;
void init() {
}

void checksum() {
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
