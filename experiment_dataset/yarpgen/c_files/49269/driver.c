#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3562510545U;
long long int var_6 = 1202354870019971019LL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -7530983181647630172LL;
unsigned short var_11 = (unsigned short)42225;
unsigned long long int var_12 = 17436871656653672511ULL;
long long int var_14 = 4056139889648072351LL;
int zero = 0;
long long int var_16 = -8346874502201536951LL;
unsigned int var_17 = 2497034413U;
unsigned char var_18 = (unsigned char)61;
unsigned short var_19 = (unsigned short)48951;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
