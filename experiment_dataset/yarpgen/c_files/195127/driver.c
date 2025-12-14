#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61662;
_Bool var_1 = (_Bool)1;
short var_2 = (short)30738;
int var_5 = 504786831;
unsigned long long int var_8 = 8535508959899976772ULL;
unsigned short var_15 = (unsigned short)30100;
unsigned short var_18 = (unsigned short)37096;
long long int var_19 = 6104648854111434143LL;
int zero = 0;
int var_20 = -1018684080;
unsigned int var_21 = 3592941454U;
unsigned short var_22 = (unsigned short)62369;
void init() {
}

void checksum() {
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
