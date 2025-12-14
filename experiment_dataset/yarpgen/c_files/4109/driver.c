#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7664625495582737396LL;
_Bool var_1 = (_Bool)1;
short var_2 = (short)16168;
long long int var_3 = -8251548721742125508LL;
unsigned char var_4 = (unsigned char)0;
unsigned short var_5 = (unsigned short)18807;
signed char var_6 = (signed char)47;
unsigned long long int var_8 = 17178646329187203555ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 16152239036653288330ULL;
long long int var_11 = -3827257476421095512LL;
short var_12 = (short)-18023;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
