#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)34;
unsigned int var_3 = 1061957346U;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)58;
unsigned short var_15 = (unsigned short)18383;
int zero = 0;
signed char var_18 = (signed char)37;
unsigned long long int var_19 = 620714315531746439ULL;
unsigned long long int var_20 = 11846438969144176485ULL;
short var_21 = (short)27594;
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
