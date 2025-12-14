#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)122;
signed char var_7 = (signed char)-92;
unsigned int var_9 = 2136559696U;
short var_10 = (short)26463;
unsigned int var_13 = 926028788U;
unsigned char var_15 = (unsigned char)122;
int zero = 0;
long long int var_17 = -8183848774251768639LL;
int var_18 = 785641665;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1790683161U;
int var_21 = 1982747718;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
