#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2301688555U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 8558342952772942901ULL;
long long int var_5 = -2201917631088641299LL;
int var_6 = 145305473;
unsigned int var_7 = 826576342U;
signed char var_10 = (signed char)-106;
unsigned short var_11 = (unsigned short)49372;
int zero = 0;
unsigned long long int var_13 = 15982146166539068433ULL;
unsigned long long int var_14 = 3761818753479860696ULL;
unsigned int var_15 = 2242922460U;
signed char var_16 = (signed char)87;
void init() {
}

void checksum() {
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
