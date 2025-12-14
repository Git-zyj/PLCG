#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7717;
unsigned long long int var_1 = 17031606474694608325ULL;
int var_3 = -266450620;
long long int var_4 = -348439561822785940LL;
_Bool var_5 = (_Bool)0;
int var_6 = -759759686;
unsigned long long int var_7 = 6283294476458976975ULL;
unsigned short var_8 = (unsigned short)21566;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)42;
int zero = 0;
int var_14 = -842246432;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)47248;
unsigned long long int var_17 = 5025636281625935576ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
