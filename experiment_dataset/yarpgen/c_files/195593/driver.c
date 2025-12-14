#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 14202302733531796222ULL;
signed char var_4 = (signed char)-16;
unsigned long long int var_6 = 11587290751343273093ULL;
unsigned char var_7 = (unsigned char)113;
unsigned short var_8 = (unsigned short)59686;
short var_9 = (short)20971;
int zero = 0;
short var_10 = (short)22915;
unsigned short var_11 = (unsigned short)22568;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
