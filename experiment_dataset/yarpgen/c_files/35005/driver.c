#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -641102491;
unsigned char var_6 = (unsigned char)229;
_Bool var_8 = (_Bool)1;
long long int var_9 = 5964846432897225702LL;
unsigned short var_10 = (unsigned short)3363;
unsigned short var_13 = (unsigned short)4464;
int zero = 0;
unsigned short var_18 = (unsigned short)33077;
unsigned int var_19 = 3736031789U;
unsigned int var_20 = 1686054062U;
unsigned long long int var_21 = 163956650572749217ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
