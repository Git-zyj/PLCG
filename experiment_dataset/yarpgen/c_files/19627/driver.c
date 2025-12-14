#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18190687216915985663ULL;
unsigned int var_1 = 817792987U;
unsigned int var_2 = 2156359171U;
unsigned int var_3 = 53001095U;
signed char var_5 = (signed char)-43;
unsigned char var_6 = (unsigned char)58;
unsigned long long int var_7 = 4884274200735384536ULL;
long long int var_8 = -3371010462343342317LL;
signed char var_9 = (signed char)65;
signed char var_10 = (signed char)-88;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)18;
int var_13 = 1530358254;
int zero = 0;
unsigned int var_14 = 3090933746U;
long long int var_15 = 1570489293477524991LL;
unsigned char var_16 = (unsigned char)58;
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
