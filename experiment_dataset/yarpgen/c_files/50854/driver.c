#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3485218294U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)51772;
unsigned long long int var_6 = 12126898784484173059ULL;
int var_7 = -305486753;
unsigned long long int var_8 = 9257938438183791920ULL;
int var_9 = 1002343716;
int zero = 0;
int var_11 = 1713376042;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2961076069U;
unsigned long long int var_14 = 13466317656809583452ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
