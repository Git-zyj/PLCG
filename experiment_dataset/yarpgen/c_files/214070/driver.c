#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_5 = -1966807574;
long long int var_9 = -81546466225849493LL;
_Bool var_10 = (_Bool)1;
int var_12 = 773035435;
unsigned int var_14 = 1139415113U;
short var_15 = (short)29569;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -3378194892112743132LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
