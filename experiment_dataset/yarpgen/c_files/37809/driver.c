#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)28299;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)0;
unsigned long long int var_7 = 13060320658142128070ULL;
signed char var_13 = (signed char)-22;
int zero = 0;
long long int var_14 = 248755608616516616LL;
unsigned int var_15 = 2983957356U;
unsigned char var_16 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
