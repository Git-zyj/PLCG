#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)119;
short var_3 = (short)-29942;
long long int var_4 = -43459635268223111LL;
unsigned long long int var_8 = 7772223867788254548ULL;
unsigned long long int var_9 = 15369917273678779685ULL;
short var_10 = (short)-3243;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)51;
int zero = 0;
unsigned int var_16 = 2155202308U;
signed char var_17 = (signed char)115;
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
