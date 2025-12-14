#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7196;
short var_4 = (short)-26245;
unsigned long long int var_5 = 4595724246211986446ULL;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-13283;
signed char var_10 = (signed char)40;
int zero = 0;
unsigned char var_12 = (unsigned char)73;
unsigned int var_13 = 3420243741U;
unsigned int var_14 = 266861326U;
void init() {
}

void checksum() {
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
