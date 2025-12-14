#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1354930072;
unsigned int var_2 = 900630478U;
unsigned int var_3 = 2412832396U;
unsigned long long int var_4 = 10633043911529659695ULL;
short var_5 = (short)-26350;
int var_6 = -1464994684;
int var_7 = -1465944641;
signed char var_8 = (signed char)-34;
unsigned short var_9 = (unsigned short)28817;
signed char var_11 = (signed char)86;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 1978033264888481114LL;
unsigned long long int var_15 = 18005300732776757299ULL;
short var_16 = (short)-24230;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
