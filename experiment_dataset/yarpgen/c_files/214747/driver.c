#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -259938209;
int var_2 = 591758799;
unsigned int var_6 = 3101282965U;
unsigned long long int var_9 = 10403082699118928701ULL;
unsigned long long int var_14 = 9410399843740349830ULL;
int zero = 0;
int var_20 = -575059357;
unsigned int var_21 = 2971863053U;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
