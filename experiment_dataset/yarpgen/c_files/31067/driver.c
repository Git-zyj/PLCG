#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22947;
short var_2 = (short)3163;
short var_8 = (short)12195;
short var_9 = (short)-10547;
short var_10 = (short)-19496;
short var_11 = (short)11277;
short var_13 = (short)-768;
unsigned int var_14 = 2684827937U;
long long int var_15 = -8140129255239205742LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)27458;
long long int var_21 = 4619597127698663581LL;
void init() {
}

void checksum() {
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
