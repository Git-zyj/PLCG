#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
unsigned short var_3 = (unsigned short)39177;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)42562;
unsigned long long int var_10 = 9173587984902105910ULL;
signed char var_11 = (signed char)114;
unsigned int var_12 = 1918223079U;
int zero = 0;
unsigned char var_15 = (unsigned char)208;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
