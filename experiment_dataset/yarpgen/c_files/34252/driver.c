#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3404287164396652413LL;
int var_1 = -461674219;
unsigned int var_3 = 671624475U;
short var_5 = (short)22856;
long long int var_6 = 1509726481324454416LL;
long long int var_7 = 6247977655247494184LL;
short var_8 = (short)20901;
int var_12 = -257846139;
int var_13 = -2146225801;
int var_14 = -513806602;
int zero = 0;
int var_15 = -248637332;
_Bool var_16 = (_Bool)1;
long long int var_17 = 5885873190591914296LL;
int var_18 = -523320311;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
