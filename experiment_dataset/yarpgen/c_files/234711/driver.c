#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17783;
unsigned char var_6 = (unsigned char)100;
_Bool var_7 = (_Bool)0;
short var_8 = (short)15484;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -172525580;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
