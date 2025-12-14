#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44761;
short var_15 = (short)-26477;
long long int var_16 = -6318274298408122011LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-24;
long long int var_20 = -8257001300872031840LL;
long long int var_21 = -5598964542867008346LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
