#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-122;
unsigned short var_3 = (unsigned short)49955;
unsigned long long int var_5 = 6105040661977540917ULL;
unsigned int var_6 = 3929849601U;
short var_8 = (short)13901;
int var_9 = -904400713;
unsigned int var_10 = 3539660468U;
int zero = 0;
signed char var_11 = (signed char)5;
long long int var_12 = 4573018198343808021LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
