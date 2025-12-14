#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 666288824U;
unsigned short var_1 = (unsigned short)35533;
unsigned long long int var_4 = 13551939169170653333ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 548586951U;
unsigned int var_8 = 3994189890U;
unsigned short var_10 = (unsigned short)62196;
_Bool var_13 = (_Bool)0;
long long int var_14 = -1580558950149436491LL;
unsigned short var_16 = (unsigned short)10716;
int zero = 0;
unsigned int var_18 = 4251178595U;
unsigned int var_19 = 204119541U;
unsigned short var_20 = (unsigned short)52345;
short var_21 = (short)405;
int var_22 = -403346127;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
