#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16026;
unsigned long long int var_3 = 868591366683903481ULL;
_Bool var_5 = (_Bool)0;
long long int var_8 = -2834592933114033611LL;
unsigned short var_11 = (unsigned short)48205;
unsigned short var_13 = (unsigned short)54440;
_Bool var_14 = (_Bool)1;
short var_16 = (short)-27932;
int zero = 0;
long long int var_17 = -3231383032953574452LL;
int var_18 = -1501736758;
short var_19 = (short)10575;
long long int var_20 = 3769954390329352923LL;
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
