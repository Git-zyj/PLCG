#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15787261892413437993ULL;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int var_9 = 2143249478;
_Bool var_10 = (_Bool)0;
long long int var_11 = -1901208998634983923LL;
long long int var_12 = 8843020072150513760LL;
unsigned char var_15 = (unsigned char)33;
short var_16 = (short)12355;
int zero = 0;
short var_18 = (short)-12060;
signed char var_19 = (signed char)97;
unsigned long long int var_20 = 16129090375011456770ULL;
unsigned int var_21 = 4000268645U;
int var_22 = 499393792;
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
