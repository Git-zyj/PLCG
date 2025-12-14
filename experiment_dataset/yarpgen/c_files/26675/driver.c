#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1276460394U;
unsigned long long int var_2 = 10771968964238968005ULL;
int var_4 = -829905908;
unsigned int var_5 = 3202406344U;
short var_6 = (short)-23082;
unsigned int var_8 = 2026566963U;
unsigned long long int var_10 = 8142207405300608859ULL;
unsigned char var_11 = (unsigned char)180;
signed char var_12 = (signed char)3;
int zero = 0;
signed char var_13 = (signed char)82;
short var_14 = (short)22875;
unsigned short var_15 = (unsigned short)30286;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
