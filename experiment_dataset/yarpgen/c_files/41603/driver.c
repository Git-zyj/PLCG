#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2013438454U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 12395859854485108060ULL;
short var_12 = (short)12685;
int zero = 0;
int var_19 = -330701848;
unsigned char var_20 = (unsigned char)225;
unsigned short var_21 = (unsigned short)32016;
void init() {
}

void checksum() {
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
