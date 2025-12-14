#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21479;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-4670;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)25630;
unsigned short var_9 = (unsigned short)52312;
int zero = 0;
unsigned short var_11 = (unsigned short)22011;
signed char var_12 = (signed char)-33;
short var_13 = (short)13323;
signed char var_14 = (signed char)75;
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
