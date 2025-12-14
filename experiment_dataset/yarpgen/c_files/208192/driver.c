#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)30924;
unsigned long long int var_5 = 18007657973153589915ULL;
long long int var_6 = -7134534260341346518LL;
unsigned int var_7 = 579112611U;
_Bool var_10 = (_Bool)0;
int var_11 = 263060260;
short var_15 = (short)-17398;
int var_18 = -839719821;
int zero = 0;
unsigned short var_19 = (unsigned short)14026;
unsigned long long int var_20 = 7155436136058071626ULL;
short var_21 = (short)-5935;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
