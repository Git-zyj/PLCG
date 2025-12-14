#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4151697816U;
short var_5 = (short)14433;
unsigned int var_6 = 60327697U;
unsigned long long int var_7 = 17354053607354042092ULL;
signed char var_8 = (signed char)86;
unsigned long long int var_9 = 989296462024145846ULL;
signed char var_13 = (signed char)-99;
int zero = 0;
unsigned long long int var_14 = 2858735726028073540ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 2591012673172494489ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
