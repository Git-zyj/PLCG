#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 94671654;
signed char var_6 = (signed char)-10;
short var_8 = (short)-10088;
signed char var_11 = (signed char)-117;
_Bool var_13 = (_Bool)1;
unsigned char var_16 = (unsigned char)110;
long long int var_18 = 7617388466969161369LL;
int zero = 0;
unsigned long long int var_19 = 11646818403780106996ULL;
short var_20 = (short)-22461;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)49487;
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
