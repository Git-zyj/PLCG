#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
unsigned long long int var_2 = 2559046239646894064ULL;
short var_9 = (short)-404;
short var_12 = (short)5151;
short var_14 = (short)9278;
unsigned long long int var_15 = 1800110835657921423ULL;
int var_16 = 653384795;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4997864211727839508LL;
unsigned int var_20 = 2456092352U;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-17268;
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
