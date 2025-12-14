#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-56;
unsigned int var_4 = 3503779113U;
_Bool var_6 = (_Bool)0;
short var_8 = (short)30081;
long long int var_9 = -7796634750267517677LL;
unsigned short var_10 = (unsigned short)65462;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)112;
long long int var_13 = 2943471918666117980LL;
unsigned int var_14 = 1707822295U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
