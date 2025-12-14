#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)13;
unsigned char var_4 = (unsigned char)156;
int var_5 = -1863666993;
_Bool var_6 = (_Bool)1;
int var_10 = -481850228;
_Bool var_13 = (_Bool)0;
long long int var_15 = -3735470444974560717LL;
int zero = 0;
long long int var_16 = 4992266260668579563LL;
unsigned int var_17 = 3439650539U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
