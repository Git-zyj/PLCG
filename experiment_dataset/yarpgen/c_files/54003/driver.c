#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-5344;
short var_2 = (short)-7670;
int var_3 = -2121931977;
unsigned int var_4 = 1938460161U;
int var_5 = 1173551366;
signed char var_7 = (signed char)-9;
int var_10 = -296254772;
int zero = 0;
signed char var_11 = (signed char)-45;
int var_12 = 689389953;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4019158320U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
