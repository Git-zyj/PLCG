#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)25893;
short var_5 = (short)15209;
short var_7 = (short)-29172;
unsigned short var_8 = (unsigned short)10298;
long long int var_9 = -7694082776691904890LL;
unsigned long long int var_10 = 3547463949427261976ULL;
int zero = 0;
unsigned int var_13 = 2139136120U;
unsigned int var_14 = 2539011247U;
int var_15 = -15568479;
void init() {
}

void checksum() {
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
