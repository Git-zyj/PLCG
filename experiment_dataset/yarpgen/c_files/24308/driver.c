#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-59;
unsigned char var_9 = (unsigned char)254;
unsigned char var_11 = (unsigned char)125;
signed char var_17 = (signed char)-102;
signed char var_18 = (signed char)63;
short var_19 = (short)13334;
int zero = 0;
unsigned long long int var_20 = 2019843126643640600ULL;
signed char var_21 = (signed char)113;
long long int var_22 = -8422395289874572366LL;
signed char var_23 = (signed char)-42;
unsigned char var_24 = (unsigned char)153;
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
