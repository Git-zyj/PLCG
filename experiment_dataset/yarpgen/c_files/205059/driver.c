#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
short var_1 = (short)24591;
signed char var_4 = (signed char)71;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 1085195792U;
long long int var_9 = 8060796247066489751LL;
unsigned char var_10 = (unsigned char)83;
unsigned char var_11 = (unsigned char)110;
int zero = 0;
unsigned int var_12 = 1758106057U;
unsigned short var_13 = (unsigned short)20530;
unsigned short var_14 = (unsigned short)48068;
unsigned int var_15 = 3278645679U;
unsigned long long int var_16 = 13442369299268257888ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
