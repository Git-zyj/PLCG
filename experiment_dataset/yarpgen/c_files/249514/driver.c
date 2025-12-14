#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)22195;
_Bool var_6 = (_Bool)0;
int var_8 = 1251781848;
unsigned int var_9 = 3836901936U;
short var_11 = (short)-23973;
unsigned long long int var_15 = 15955468382005482666ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)17866;
unsigned int var_18 = 3528979843U;
unsigned short var_19 = (unsigned short)64318;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
