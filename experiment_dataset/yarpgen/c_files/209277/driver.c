#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4534;
_Bool var_2 = (_Bool)0;
_Bool var_9 = (_Bool)0;
long long int var_11 = -1465018611329508371LL;
long long int var_13 = 500824374857635395LL;
unsigned long long int var_14 = 13752883709977630929ULL;
long long int var_16 = -2676179916520165260LL;
int zero = 0;
long long int var_17 = -2036027594574751268LL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)40231;
unsigned int var_20 = 3662086790U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
