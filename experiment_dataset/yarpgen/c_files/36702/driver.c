#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -737531746;
signed char var_2 = (signed char)-125;
unsigned short var_3 = (unsigned short)52559;
unsigned short var_6 = (unsigned short)48573;
_Bool var_9 = (_Bool)1;
short var_12 = (short)594;
unsigned long long int var_13 = 6500711465669351168ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)6787;
unsigned char var_15 = (unsigned char)211;
long long int var_16 = 3651154582086020010LL;
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
