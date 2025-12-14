#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_4 = -173367626;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3573219751U;
unsigned short var_8 = (unsigned short)9477;
signed char var_9 = (signed char)121;
signed char var_10 = (signed char)113;
unsigned short var_11 = (unsigned short)54294;
unsigned long long int var_12 = 7521082478260939758ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)-24336;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
long long int var_17 = 3746977348526597640LL;
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
