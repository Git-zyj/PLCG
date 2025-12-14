#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_8 = 411822063;
unsigned short var_9 = (unsigned short)11032;
unsigned long long int var_10 = 8817113130871506120ULL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned short var_16 = (unsigned short)1306;
signed char var_17 = (signed char)-111;
int zero = 0;
unsigned long long int var_18 = 946827567996629264ULL;
signed char var_19 = (signed char)3;
unsigned long long int var_20 = 9617520362957444253ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
