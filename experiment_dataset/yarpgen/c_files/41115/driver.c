#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)238;
signed char var_10 = (signed char)-74;
int var_15 = -447825041;
unsigned char var_17 = (unsigned char)213;
int zero = 0;
unsigned long long int var_18 = 12674517795630265942ULL;
unsigned int var_19 = 1588969718U;
short var_20 = (short)10273;
long long int var_21 = 6598590221737975977LL;
unsigned short var_22 = (unsigned short)22277;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
