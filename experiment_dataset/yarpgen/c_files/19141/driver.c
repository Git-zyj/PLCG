#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 17838314671404558495ULL;
unsigned char var_7 = (unsigned char)249;
int var_8 = -750388796;
short var_13 = (short)13565;
int zero = 0;
long long int var_16 = 641415325689072053LL;
short var_17 = (short)1444;
long long int var_18 = 3479256321156028936LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
