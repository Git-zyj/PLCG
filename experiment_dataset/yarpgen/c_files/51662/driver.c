#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5369942438588845177LL;
unsigned int var_2 = 1169617377U;
int var_3 = -529784853;
unsigned long long int var_4 = 14207174149120208966ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)12070;
int var_8 = -17647509;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 222034150U;
int zero = 0;
short var_12 = (short)-6171;
unsigned long long int var_13 = 4695929026753114494ULL;
long long int var_14 = -6422957164090576210LL;
int var_15 = -1322318386;
unsigned int var_16 = 1211409765U;
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
