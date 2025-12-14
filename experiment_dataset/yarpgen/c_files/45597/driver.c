#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 320398542;
unsigned short var_2 = (unsigned short)1127;
short var_5 = (short)-25549;
short var_8 = (short)-28333;
unsigned long long int var_9 = 15227002665240137272ULL;
long long int var_13 = 2656062375094848514LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1918700180U;
unsigned long long int var_17 = 13128967290497676428ULL;
unsigned char var_18 = (unsigned char)82;
signed char var_19 = (signed char)74;
short var_20 = (short)-3486;
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
