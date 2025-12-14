#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 952159131;
long long int var_3 = 433638415966277357LL;
int var_4 = 1190878832;
_Bool var_5 = (_Bool)1;
long long int var_7 = 5120226759887849236LL;
int var_9 = -1806961968;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -8023304742727380732LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
