#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8766852792169496453LL;
signed char var_2 = (signed char)101;
unsigned long long int var_3 = 8489767144349804473ULL;
long long int var_5 = -4177497496034085605LL;
signed char var_6 = (signed char)-13;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 3945914624U;
int zero = 0;
long long int var_13 = 2287525272283111016LL;
unsigned short var_14 = (unsigned short)3017;
short var_15 = (short)25985;
unsigned int var_16 = 4108310963U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
