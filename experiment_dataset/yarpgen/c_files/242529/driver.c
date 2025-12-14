#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_3 = -2070533752;
unsigned char var_4 = (unsigned char)58;
_Bool var_5 = (_Bool)1;
int var_6 = 483463760;
signed char var_8 = (signed char)104;
signed char var_10 = (signed char)-56;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -1392955906;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
