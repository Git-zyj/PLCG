#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3239015098U;
unsigned short var_2 = (unsigned short)5472;
long long int var_3 = 5486593277549354799LL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2869361228U;
unsigned char var_15 = (unsigned char)211;
signed char var_17 = (signed char)33;
int zero = 0;
unsigned short var_19 = (unsigned short)33369;
unsigned int var_20 = 4177933941U;
unsigned int var_21 = 3688532355U;
unsigned int var_22 = 2748260978U;
signed char var_23 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
