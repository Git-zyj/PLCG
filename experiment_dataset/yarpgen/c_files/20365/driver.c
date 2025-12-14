#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
long long int var_3 = 8142044973333077792LL;
long long int var_5 = -2348987796407554801LL;
long long int var_6 = 5893771757498907615LL;
long long int var_11 = 3023602127293542052LL;
signed char var_12 = (signed char)-82;
long long int var_13 = 4027562809698901308LL;
unsigned int var_15 = 425627077U;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)68;
unsigned char var_18 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
