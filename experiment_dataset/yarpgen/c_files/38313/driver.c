#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_4 = (short)3244;
unsigned char var_9 = (unsigned char)85;
short var_11 = (short)3486;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)18252;
_Bool var_16 = (_Bool)0;
unsigned int var_19 = 820734047U;
int zero = 0;
unsigned short var_20 = (unsigned short)19567;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)27668;
void init() {
}

void checksum() {
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
