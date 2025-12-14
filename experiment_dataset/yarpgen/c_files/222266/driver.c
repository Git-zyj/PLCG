#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
long long int var_6 = 8956554249611698344LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -7584795145370775285LL;
long long int var_9 = -7465465620825142695LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = -6481744775332552318LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -7446670580360799545LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
