#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 4001675949794169177LL;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1339120660U;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)135;
unsigned char var_12 = (unsigned char)114;
unsigned int var_14 = 4085453986U;
long long int var_16 = -8321524027542201328LL;
short var_18 = (short)-12404;
int zero = 0;
unsigned int var_19 = 4228217551U;
int var_20 = -1430721343;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)3;
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
