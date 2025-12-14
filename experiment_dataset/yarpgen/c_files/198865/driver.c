#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-52;
int var_2 = -825517538;
long long int var_5 = 8316848279629408425LL;
unsigned int var_6 = 2948120785U;
int var_7 = 1781667100;
long long int var_8 = 1559638698543942583LL;
unsigned int var_10 = 880221271U;
long long int var_11 = 9158618926063314204LL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)63;
_Bool var_14 = (_Bool)1;
long long int var_15 = -6088648198646311868LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)13719;
long long int var_18 = -8264279866621944225LL;
long long int var_19 = -3940353108831996894LL;
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
