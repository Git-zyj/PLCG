#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 523674356U;
unsigned long long int var_1 = 12907714950307578893ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)21224;
unsigned short var_4 = (unsigned short)40433;
unsigned short var_5 = (unsigned short)33583;
signed char var_6 = (signed char)-14;
long long int var_8 = 547553198206953071LL;
unsigned int var_9 = 3171810093U;
unsigned long long int var_10 = 13128375374937496003ULL;
unsigned int var_11 = 2818308743U;
short var_12 = (short)-31075;
short var_13 = (short)-2552;
short var_14 = (short)10173;
unsigned short var_15 = (unsigned short)984;
int zero = 0;
unsigned char var_16 = (unsigned char)163;
unsigned short var_17 = (unsigned short)34106;
signed char var_18 = (signed char)108;
short var_19 = (short)1064;
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
