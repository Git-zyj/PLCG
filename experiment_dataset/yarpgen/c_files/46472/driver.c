#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-904;
long long int var_1 = -571117806392235175LL;
int var_2 = -2026942134;
unsigned char var_3 = (unsigned char)235;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)-77;
signed char var_13 = (signed char)-125;
unsigned char var_14 = (unsigned char)128;
long long int var_15 = 6820308143321542052LL;
int zero = 0;
unsigned char var_18 = (unsigned char)118;
unsigned short var_19 = (unsigned short)8777;
unsigned short var_20 = (unsigned short)978;
int var_21 = 1192696256;
void init() {
}

void checksum() {
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
