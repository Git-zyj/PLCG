#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 909450613U;
unsigned long long int var_3 = 18350957080810929128ULL;
unsigned short var_4 = (unsigned short)32853;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)50;
_Bool var_9 = (_Bool)1;
long long int var_10 = 3416652931557340241LL;
long long int var_11 = 4878856438021904108LL;
unsigned short var_12 = (unsigned short)574;
unsigned char var_14 = (unsigned char)226;
int zero = 0;
short var_15 = (short)13720;
signed char var_16 = (signed char)103;
unsigned char var_17 = (unsigned char)171;
signed char var_18 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
