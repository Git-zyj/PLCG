#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8853121206224018876LL;
long long int var_1 = -4046481021439019545LL;
unsigned char var_3 = (unsigned char)9;
short var_4 = (short)3509;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-16531;
unsigned char var_8 = (unsigned char)158;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -7069419070261217661LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
