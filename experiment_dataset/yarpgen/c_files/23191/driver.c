#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4709548190269756237LL;
unsigned long long int var_2 = 15874418951602443741ULL;
_Bool var_3 = (_Bool)1;
long long int var_5 = 7897255107490552597LL;
unsigned long long int var_8 = 8341802931302224451ULL;
signed char var_10 = (signed char)58;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
