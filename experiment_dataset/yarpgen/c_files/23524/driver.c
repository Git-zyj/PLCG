#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28087;
unsigned long long int var_2 = 1160415163818550729ULL;
int var_3 = -258212762;
unsigned int var_5 = 2870474395U;
unsigned char var_11 = (unsigned char)27;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 721640306U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
