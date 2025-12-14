#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22653;
short var_1 = (short)13494;
unsigned char var_3 = (unsigned char)253;
long long int var_8 = 8605295910924189222LL;
_Bool var_13 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned long long int var_19 = 208078534911669813ULL;
int zero = 0;
unsigned long long int var_20 = 5733526130224206474ULL;
unsigned char var_21 = (unsigned char)218;
signed char var_22 = (signed char)57;
void init() {
}

void checksum() {
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
