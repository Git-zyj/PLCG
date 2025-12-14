#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -190714243;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)64565;
signed char var_7 = (signed char)-93;
unsigned long long int var_8 = 7508079377135456304ULL;
short var_15 = (short)-17757;
signed char var_16 = (signed char)126;
int zero = 0;
unsigned short var_19 = (unsigned short)29426;
unsigned short var_20 = (unsigned short)18238;
unsigned int var_21 = 4058917470U;
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
