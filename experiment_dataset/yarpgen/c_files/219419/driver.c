#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4609974948433537687LL;
short var_1 = (short)-32225;
unsigned long long int var_3 = 449794661562422167ULL;
unsigned int var_4 = 571736568U;
unsigned char var_5 = (unsigned char)122;
short var_6 = (short)12818;
short var_7 = (short)-1135;
unsigned long long int var_10 = 10841587116606123016ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -4108959422035359118LL;
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
