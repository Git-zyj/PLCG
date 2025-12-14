#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)73;
unsigned short var_4 = (unsigned short)2514;
_Bool var_6 = (_Bool)1;
long long int var_7 = 5418724150810408522LL;
unsigned int var_8 = 670184226U;
unsigned long long int var_9 = 9392708095192870076ULL;
int var_10 = -2413026;
signed char var_12 = (signed char)20;
short var_13 = (short)6884;
unsigned short var_14 = (unsigned short)60200;
long long int var_15 = -3845799799366041831LL;
int zero = 0;
signed char var_16 = (signed char)-18;
int var_17 = 1711898905;
unsigned int var_18 = 2978538208U;
unsigned int var_19 = 3715347328U;
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
