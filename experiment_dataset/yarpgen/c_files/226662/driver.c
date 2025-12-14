#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-77;
signed char var_5 = (signed char)113;
short var_6 = (short)-25402;
int var_9 = 1900942117;
signed char var_13 = (signed char)31;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3797550826U;
unsigned long long int var_18 = 13782089289943220917ULL;
unsigned short var_19 = (unsigned short)43833;
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
