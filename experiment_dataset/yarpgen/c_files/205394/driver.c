#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8007926959606303105LL;
unsigned int var_3 = 1827986302U;
unsigned long long int var_6 = 14636560406911772402ULL;
_Bool var_7 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)53379;
signed char var_16 = (signed char)-77;
int zero = 0;
unsigned int var_18 = 400316664U;
unsigned long long int var_19 = 17200752399635139142ULL;
void init() {
}

void checksum() {
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
