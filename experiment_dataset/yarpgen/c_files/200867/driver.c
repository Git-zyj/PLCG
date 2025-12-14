#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)123;
unsigned short var_4 = (unsigned short)42635;
long long int var_6 = 9088398082837049753LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
long long int var_12 = 1863354155392395325LL;
int zero = 0;
unsigned char var_20 = (unsigned char)36;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)3915;
short var_23 = (short)-20289;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
