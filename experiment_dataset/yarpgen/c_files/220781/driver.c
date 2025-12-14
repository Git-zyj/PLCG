#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28029;
unsigned char var_1 = (unsigned char)10;
long long int var_2 = -2513096062569978041LL;
int var_4 = -112695679;
int var_5 = 915049665;
short var_6 = (short)-28920;
int var_7 = -801082521;
unsigned long long int var_12 = 12658785278295584624ULL;
unsigned short var_13 = (unsigned short)59515;
unsigned long long int var_14 = 4893929222549228013ULL;
long long int var_15 = 4692586540428363457LL;
int zero = 0;
unsigned long long int var_17 = 3340064861722729309ULL;
short var_18 = (short)24758;
int var_19 = 1450493963;
unsigned short var_20 = (unsigned short)131;
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
