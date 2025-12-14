#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1238061264U;
unsigned char var_9 = (unsigned char)28;
_Bool var_10 = (_Bool)1;
unsigned long long int var_16 = 15035769287225044444ULL;
int zero = 0;
signed char var_19 = (signed char)-9;
unsigned long long int var_20 = 9906909094563102351ULL;
unsigned short var_21 = (unsigned short)30529;
unsigned int var_22 = 544501210U;
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
