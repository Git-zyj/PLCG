#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)8184;
unsigned long long int var_3 = 12955077547952370001ULL;
unsigned long long int var_5 = 8660790909694539092ULL;
signed char var_6 = (signed char)-69;
long long int var_8 = 6627355325436250614LL;
int zero = 0;
signed char var_11 = (signed char)-9;
unsigned char var_12 = (unsigned char)30;
void init() {
}

void checksum() {
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
