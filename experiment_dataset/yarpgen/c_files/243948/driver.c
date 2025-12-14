#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6868508931364420312LL;
int var_9 = 468557387;
long long int var_11 = 1872998702704920045LL;
unsigned short var_13 = (unsigned short)28423;
short var_14 = (short)-12618;
int zero = 0;
unsigned int var_19 = 3970022840U;
unsigned char var_20 = (unsigned char)153;
long long int var_21 = 2614461005727531745LL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)31504;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
