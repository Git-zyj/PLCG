#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_5 = (short)-25392;
int var_8 = 322363976;
unsigned short var_9 = (unsigned short)1990;
int zero = 0;
unsigned char var_12 = (unsigned char)204;
long long int var_13 = -8930316749343350062LL;
long long int var_14 = 2370970648091880871LL;
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
