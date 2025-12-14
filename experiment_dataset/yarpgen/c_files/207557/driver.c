#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 288100872U;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)94;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-17750;
signed char var_14 = (signed char)54;
signed char var_16 = (signed char)-48;
int zero = 0;
unsigned long long int var_18 = 17211836279447293572ULL;
unsigned short var_19 = (unsigned short)42476;
signed char var_20 = (signed char)35;
short var_21 = (short)-543;
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
