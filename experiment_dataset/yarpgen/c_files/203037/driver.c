#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16826408601086963100ULL;
int var_5 = -748980174;
unsigned int var_6 = 3318368249U;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)102;
short var_12 = (short)19284;
unsigned long long int var_14 = 956068778728352689ULL;
int zero = 0;
unsigned int var_15 = 22349025U;
short var_16 = (short)5841;
unsigned short var_17 = (unsigned short)59974;
unsigned long long int var_18 = 2332555302010813721ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
