#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
unsigned int var_3 = 4151292716U;
unsigned long long int var_5 = 7277796578187192632ULL;
long long int var_6 = -978350170792613132LL;
short var_7 = (short)24131;
unsigned char var_9 = (unsigned char)98;
unsigned char var_10 = (unsigned char)206;
int zero = 0;
unsigned int var_13 = 2040683748U;
signed char var_14 = (signed char)47;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-84;
unsigned int var_17 = 2541138701U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
