#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 941722799U;
signed char var_4 = (signed char)5;
long long int var_5 = -4426575806259658774LL;
unsigned short var_7 = (unsigned short)44213;
_Bool var_11 = (_Bool)1;
unsigned int var_14 = 2876856209U;
unsigned int var_15 = 4091783074U;
int zero = 0;
unsigned long long int var_16 = 3720776869244129718ULL;
unsigned int var_17 = 1685317142U;
unsigned char var_18 = (unsigned char)18;
signed char var_19 = (signed char)62;
signed char var_20 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
