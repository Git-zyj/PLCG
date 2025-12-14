#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 9040407801130542758LL;
unsigned int var_4 = 3995030293U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 4419102443381967594ULL;
unsigned int var_11 = 4197425923U;
int var_13 = 1821063682;
signed char var_15 = (signed char)42;
int zero = 0;
unsigned long long int var_18 = 3745579567738662971ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
