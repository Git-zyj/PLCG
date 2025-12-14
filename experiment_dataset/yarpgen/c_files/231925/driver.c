#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-98;
unsigned short var_9 = (unsigned short)8010;
long long int var_13 = -7306624542735136020LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 4756316381069468068LL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 12040183632390145922ULL;
void init() {
}

void checksum() {
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
