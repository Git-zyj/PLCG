#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned short var_1 = (unsigned short)54724;
short var_3 = (short)2814;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)64150;
signed char var_12 = (signed char)69;
unsigned char var_13 = (unsigned char)30;
unsigned short var_14 = (unsigned short)60609;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
