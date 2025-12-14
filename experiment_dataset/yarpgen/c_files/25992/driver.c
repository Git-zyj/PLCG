#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21143;
unsigned int var_4 = 1229829398U;
int var_5 = -1364465954;
unsigned short var_8 = (unsigned short)41738;
unsigned long long int var_17 = 8341416805566659195ULL;
short var_18 = (short)-14158;
int zero = 0;
unsigned int var_19 = 1919768837U;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1352313317U;
long long int var_22 = 3008129287123081685LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
