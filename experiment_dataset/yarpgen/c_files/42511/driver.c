#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4284877100954928660LL;
unsigned short var_5 = (unsigned short)42612;
int var_6 = 1033730769;
unsigned int var_10 = 454421202U;
unsigned long long int var_13 = 9382298086298926643ULL;
unsigned char var_15 = (unsigned char)42;
int zero = 0;
signed char var_18 = (signed char)-105;
short var_19 = (short)22592;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
