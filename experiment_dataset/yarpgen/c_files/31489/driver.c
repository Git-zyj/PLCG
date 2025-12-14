#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10538;
signed char var_5 = (signed char)-9;
int var_6 = 345600840;
signed char var_8 = (signed char)-113;
int zero = 0;
unsigned short var_10 = (unsigned short)6547;
unsigned char var_11 = (unsigned char)71;
short var_12 = (short)3092;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
