#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-45;
_Bool var_7 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)23659;
int zero = 0;
unsigned short var_17 = (unsigned short)36732;
unsigned short var_18 = (unsigned short)39627;
void init() {
}

void checksum() {
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
