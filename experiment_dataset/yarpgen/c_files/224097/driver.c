#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_7 = (unsigned char)157;
unsigned long long int var_8 = 2253788214560484542ULL;
int var_9 = -1437487862;
int zero = 0;
unsigned char var_11 = (unsigned char)86;
unsigned short var_12 = (unsigned short)57711;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-52;
unsigned long long int var_15 = 12530791459593842894ULL;
signed char var_16 = (signed char)7;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
