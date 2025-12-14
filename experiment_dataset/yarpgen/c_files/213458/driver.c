#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11922;
int var_5 = 377576073;
_Bool var_8 = (_Bool)1;
unsigned char var_12 = (unsigned char)147;
long long int var_14 = 4305989147608043432LL;
int zero = 0;
unsigned short var_18 = (unsigned short)7640;
unsigned int var_19 = 3250295948U;
signed char var_20 = (signed char)-76;
short var_21 = (short)12144;
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
