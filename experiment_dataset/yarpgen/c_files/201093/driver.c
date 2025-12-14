#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 1329414426543787802ULL;
int var_4 = -911397075;
long long int var_6 = -6246281399350227989LL;
short var_7 = (short)13227;
unsigned int var_8 = 3688485129U;
int var_12 = 463908984;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 3880898240332885173ULL;
unsigned long long int var_18 = 18329580327447139793ULL;
signed char var_19 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
