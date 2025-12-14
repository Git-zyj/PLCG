#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12273612710045861999ULL;
_Bool var_3 = (_Bool)0;
long long int var_7 = 5832716416102613574LL;
long long int var_13 = 4890143070355037004LL;
unsigned char var_14 = (unsigned char)63;
int zero = 0;
short var_18 = (short)233;
short var_19 = (short)-17309;
void init() {
}

void checksum() {
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
