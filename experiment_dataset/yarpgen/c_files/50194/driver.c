#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
long long int var_7 = -4203721643894948275LL;
int var_8 = -1589530886;
unsigned char var_12 = (unsigned char)162;
unsigned int var_14 = 624376714U;
int zero = 0;
signed char var_16 = (signed char)85;
long long int var_17 = -3476497560511360475LL;
unsigned int var_18 = 1191457126U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
