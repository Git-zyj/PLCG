#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)54901;
long long int var_8 = -2213195243466779615LL;
long long int var_9 = -1028997326774868104LL;
long long int var_13 = -1127866310395473030LL;
long long int var_14 = 4327940164399580496LL;
int zero = 0;
int var_16 = -1631191438;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
