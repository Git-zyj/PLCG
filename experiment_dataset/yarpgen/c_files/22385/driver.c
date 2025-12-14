#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2815;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 3240201061469875811ULL;
unsigned short var_4 = (unsigned short)61487;
unsigned long long int var_5 = 9998879146937303481ULL;
unsigned int var_8 = 348129192U;
short var_11 = (short)23675;
signed char var_12 = (signed char)-29;
unsigned char var_17 = (unsigned char)117;
int zero = 0;
unsigned long long int var_18 = 3797432294659434642ULL;
short var_19 = (short)-9938;
short var_20 = (short)-31817;
unsigned long long int var_21 = 9706553426049530410ULL;
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
