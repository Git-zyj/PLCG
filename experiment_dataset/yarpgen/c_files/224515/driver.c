#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -571631393761010905LL;
unsigned short var_2 = (unsigned short)19802;
unsigned short var_4 = (unsigned short)24986;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 4239630658U;
unsigned long long int var_7 = 6982603478391264979ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)20843;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
