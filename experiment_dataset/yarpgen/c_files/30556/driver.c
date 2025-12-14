#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
unsigned long long int var_2 = 2396319385096310346ULL;
short var_7 = (short)-32189;
short var_12 = (short)-11842;
_Bool var_13 = (_Bool)1;
short var_14 = (short)2551;
unsigned char var_18 = (unsigned char)53;
int zero = 0;
long long int var_19 = -6386676208057231628LL;
unsigned short var_20 = (unsigned short)44734;
unsigned long long int var_21 = 10293973548639315331ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
