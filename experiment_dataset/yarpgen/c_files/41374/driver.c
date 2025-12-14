#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)135;
_Bool var_5 = (_Bool)1;
short var_7 = (short)29180;
unsigned char var_9 = (unsigned char)104;
signed char var_14 = (signed char)117;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 847287338U;
short var_18 = (short)22574;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
