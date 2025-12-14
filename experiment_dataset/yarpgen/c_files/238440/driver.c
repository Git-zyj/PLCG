#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2596236793U;
signed char var_2 = (signed char)37;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)5;
unsigned long long int var_5 = 9622218171830563802ULL;
short var_7 = (short)1744;
unsigned long long int var_8 = 7332834184618072101ULL;
long long int var_9 = -7738349482988615031LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_16 = -4118701261652375038LL;
long long int var_17 = 1677141808738031817LL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-32;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
