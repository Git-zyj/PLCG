#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_4 = -788234822634785749LL;
unsigned char var_6 = (unsigned char)114;
short var_13 = (short)-10576;
unsigned char var_15 = (unsigned char)154;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 223855201U;
short var_20 = (short)13860;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
