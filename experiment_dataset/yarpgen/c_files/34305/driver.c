#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27264;
_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_12 = (signed char)63;
int zero = 0;
int var_19 = 1728943342;
unsigned short var_20 = (unsigned short)34353;
unsigned int var_21 = 9304815U;
unsigned long long int var_22 = 13066594465765611045ULL;
void init() {
}

void checksum() {
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
