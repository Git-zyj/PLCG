#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
unsigned int var_1 = 12755695U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)25804;
long long int var_4 = -2832509998450320964LL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)232;
short var_7 = (short)-3771;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_11 = 1301272929;
long long int var_12 = 6611486663497420390LL;
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
