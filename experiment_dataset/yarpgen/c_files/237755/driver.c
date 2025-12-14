#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)60912;
unsigned char var_6 = (unsigned char)149;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)60705;
signed char var_13 = (signed char)8;
signed char var_15 = (signed char)28;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 13524392183016507387ULL;
unsigned char var_21 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
