#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11278867415172729650ULL;
signed char var_5 = (signed char)-34;
unsigned long long int var_6 = 10672632875881655482ULL;
unsigned int var_13 = 3577864462U;
unsigned long long int var_14 = 616146765153004607ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 426797155;
signed char var_17 = (signed char)-10;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
