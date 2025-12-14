#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12731;
unsigned short var_8 = (unsigned short)22490;
signed char var_11 = (signed char)-48;
unsigned int var_13 = 620442161U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3271159754U;
short var_20 = (short)-8091;
short var_21 = (short)10139;
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
