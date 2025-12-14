#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 7509088147250520945ULL;
int var_6 = 1866148762;
unsigned long long int var_8 = 2043573320194945442ULL;
unsigned short var_9 = (unsigned short)4454;
short var_11 = (short)4182;
unsigned short var_13 = (unsigned short)34458;
unsigned short var_19 = (unsigned short)31302;
int zero = 0;
unsigned long long int var_20 = 5098476718236164768ULL;
unsigned int var_21 = 3367565588U;
void init() {
}

void checksum() {
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
