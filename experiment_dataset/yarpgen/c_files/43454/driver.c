#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5542382370022468525LL;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)19;
_Bool var_10 = (_Bool)1;
signed char var_14 = (signed char)-122;
unsigned int var_17 = 1959803468U;
int zero = 0;
int var_19 = 1920172628;
unsigned char var_20 = (unsigned char)89;
int var_21 = -853067791;
long long int var_22 = -6381360440174588903LL;
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
