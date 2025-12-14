#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned long long int var_2 = 2922884663396686400ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 1531202956299417807ULL;
long long int var_6 = -3231136142321013518LL;
unsigned long long int var_7 = 8419687020202306081ULL;
unsigned long long int var_8 = 11910272079404954253ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 854303961437547707ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 8858120831848013728ULL;
long long int var_13 = -657994019700638543LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
