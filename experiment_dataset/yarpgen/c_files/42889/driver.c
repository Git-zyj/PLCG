#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2903094617396102908ULL;
short var_1 = (short)-8578;
signed char var_3 = (signed char)1;
unsigned int var_4 = 3512730112U;
unsigned short var_5 = (unsigned short)8504;
int var_6 = -1489286202;
unsigned short var_7 = (unsigned short)14325;
signed char var_8 = (signed char)-6;
int zero = 0;
unsigned long long int var_10 = 60167972611036132ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)58855;
long long int var_13 = 888886176714989897LL;
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
