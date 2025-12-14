#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
short var_1 = (short)-11171;
unsigned int var_2 = 2855774358U;
signed char var_6 = (signed char)-101;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 10081020673614971980ULL;
int var_15 = 274547568;
signed char var_19 = (signed char)-70;
int zero = 0;
unsigned long long int var_20 = 8988677449187566087ULL;
long long int var_21 = 6168979235231911948LL;
void init() {
}

void checksum() {
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
