#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)7454;
unsigned char var_4 = (unsigned char)135;
long long int var_6 = 3161306832245147316LL;
int var_9 = 1563337389;
_Bool var_10 = (_Bool)1;
long long int var_11 = -6100531579003797109LL;
long long int var_15 = 9103812419310671991LL;
int zero = 0;
unsigned long long int var_18 = 3134886727001545809ULL;
long long int var_19 = -1745663994141613452LL;
unsigned short var_20 = (unsigned short)1155;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
