#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 780357474U;
long long int var_6 = -3170379207436281957LL;
unsigned int var_7 = 80406018U;
long long int var_8 = -9029120083803105230LL;
short var_9 = (short)13560;
unsigned short var_10 = (unsigned short)38209;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1344519792U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
