#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3890634948U;
unsigned long long int var_3 = 2497335616844125132ULL;
unsigned int var_4 = 304718351U;
_Bool var_5 = (_Bool)1;
int var_6 = 900259590;
int var_8 = 1942266053;
unsigned long long int var_9 = 13585233973603074378ULL;
unsigned int var_10 = 642568478U;
unsigned int var_11 = 2603569255U;
int zero = 0;
unsigned long long int var_12 = 6983378817934287373ULL;
signed char var_13 = (signed char)82;
int var_14 = 1280311743;
unsigned long long int var_15 = 4372635050225443756ULL;
unsigned short var_16 = (unsigned short)5185;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
