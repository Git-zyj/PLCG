#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 802792649251828436LL;
unsigned int var_5 = 3105248534U;
unsigned short var_7 = (unsigned short)62436;
unsigned short var_12 = (unsigned short)32008;
int zero = 0;
long long int var_20 = 204166493593932062LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
