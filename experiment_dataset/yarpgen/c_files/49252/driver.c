#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -203681131;
unsigned char var_3 = (unsigned char)152;
unsigned int var_9 = 3526042251U;
_Bool var_11 = (_Bool)0;
long long int var_12 = 381687094290524989LL;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 1762538976U;
long long int var_19 = 6650857282159723534LL;
int zero = 0;
long long int var_20 = -3514058266610112852LL;
short var_21 = (short)-6382;
short var_22 = (short)6508;
signed char var_23 = (signed char)-121;
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
