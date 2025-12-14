#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2346479624916744987ULL;
short var_2 = (short)23250;
unsigned int var_3 = 783169362U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)42943;
unsigned short var_10 = (unsigned short)11515;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 15716321553881953135ULL;
short var_16 = (short)19275;
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
