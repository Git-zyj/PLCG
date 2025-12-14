#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 6459683365876765921ULL;
signed char var_9 = (signed char)-32;
long long int var_12 = 448570315164344478LL;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)7431;
unsigned long long int var_18 = 18257077681770888268ULL;
int zero = 0;
signed char var_19 = (signed char)101;
unsigned short var_20 = (unsigned short)11621;
unsigned short var_21 = (unsigned short)5793;
void init() {
}

void checksum() {
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
