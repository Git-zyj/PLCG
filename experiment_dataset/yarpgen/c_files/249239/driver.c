#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)9225;
int var_7 = -873025054;
unsigned short var_9 = (unsigned short)1355;
short var_10 = (short)12910;
unsigned long long int var_13 = 7081669983194525080ULL;
int zero = 0;
int var_14 = -1863325122;
long long int var_15 = 2640655652789248374LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
