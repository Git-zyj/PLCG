#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-116;
unsigned short var_2 = (unsigned short)4520;
short var_3 = (short)26164;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)1362;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-21156;
short var_12 = (short)-16375;
short var_13 = (short)-25191;
signed char var_14 = (signed char)-96;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
