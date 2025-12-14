#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33818;
signed char var_6 = (signed char)-61;
_Bool var_9 = (_Bool)0;
unsigned char var_15 = (unsigned char)97;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_20 = -2098041784;
unsigned char var_21 = (unsigned char)100;
void init() {
}

void checksum() {
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
