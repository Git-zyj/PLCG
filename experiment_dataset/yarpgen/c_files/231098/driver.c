#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)42;
_Bool var_2 = (_Bool)1;
int var_5 = 1967186050;
unsigned long long int var_6 = 907431404339175030ULL;
short var_8 = (short)20447;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 5278012481752057717ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)19285;
unsigned short var_15 = (unsigned short)34375;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
