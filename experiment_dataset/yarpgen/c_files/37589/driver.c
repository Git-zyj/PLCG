#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -222903142;
int var_2 = 2029197813;
long long int var_4 = -4745270708996459823LL;
_Bool var_5 = (_Bool)0;
int var_6 = 2096605625;
unsigned long long int var_7 = 16707720805673268728ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1599073439U;
unsigned short var_11 = (unsigned short)43426;
int zero = 0;
int var_13 = 995140872;
unsigned int var_14 = 2878330777U;
unsigned int var_15 = 1630709359U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
