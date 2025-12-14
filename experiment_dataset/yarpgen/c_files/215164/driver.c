#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
long long int var_3 = 8697026317703135144LL;
unsigned char var_4 = (unsigned char)181;
unsigned char var_6 = (unsigned char)65;
unsigned int var_9 = 3038490718U;
unsigned int var_15 = 2782197899U;
int zero = 0;
long long int var_17 = -2468166330304294873LL;
int var_18 = -561498132;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)102;
_Bool var_21 = (_Bool)1;
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
