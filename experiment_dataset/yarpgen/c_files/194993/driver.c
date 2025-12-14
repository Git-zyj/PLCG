#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned short var_11 = (unsigned short)61887;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)245;
unsigned short var_20 = (unsigned short)533;
long long int var_21 = 7220128416780868550LL;
long long int var_22 = 2886048608412043137LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
