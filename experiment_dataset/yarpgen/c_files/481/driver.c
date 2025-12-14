#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-94;
_Bool var_2 = (_Bool)1;
int var_4 = -1861020334;
unsigned short var_5 = (unsigned short)62380;
unsigned char var_8 = (unsigned char)52;
short var_10 = (short)-8470;
short var_12 = (short)-13523;
int zero = 0;
short var_13 = (short)-17532;
unsigned short var_14 = (unsigned short)9641;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
