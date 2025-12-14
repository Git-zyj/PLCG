#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3021665698755672964LL;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 961700121U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 398083355U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)24;
long long int var_9 = 6731711873036641139LL;
long long int var_10 = 6001187603062679622LL;
unsigned long long int var_11 = 15759996575228794984ULL;
int zero = 0;
signed char var_12 = (signed char)-48;
unsigned int var_13 = 1472588727U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
