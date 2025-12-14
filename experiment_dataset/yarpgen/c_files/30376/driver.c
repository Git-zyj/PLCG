#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3530879447481800460LL;
unsigned short var_2 = (unsigned short)47408;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)49;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)0;
int zero = 0;
unsigned long long int var_15 = 7989306938350968128ULL;
unsigned long long int var_16 = 12395162082134463535ULL;
signed char var_17 = (signed char)-65;
void init() {
}

void checksum() {
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
