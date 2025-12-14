#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 3283665066087430755ULL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)29663;
signed char var_16 = (signed char)-102;
short var_17 = (short)-20329;
long long int var_18 = 5341756062850557710LL;
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
