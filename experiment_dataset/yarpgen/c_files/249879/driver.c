#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3899546402681375893ULL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)5314;
unsigned long long int var_5 = 1186163979254163438ULL;
short var_11 = (short)-20888;
int var_13 = 2006559595;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5253503505736054287ULL;
unsigned int var_18 = 636760403U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
