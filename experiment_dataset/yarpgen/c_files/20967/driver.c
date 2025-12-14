#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_12 = (_Bool)0;
unsigned int var_13 = 293664995U;
unsigned short var_15 = (unsigned short)64956;
int zero = 0;
unsigned short var_17 = (unsigned short)39161;
unsigned short var_18 = (unsigned short)17992;
unsigned int var_19 = 3760282006U;
signed char var_20 = (signed char)53;
unsigned char var_21 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
