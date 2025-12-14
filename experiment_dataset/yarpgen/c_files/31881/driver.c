#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)53163;
signed char var_5 = (signed char)50;
unsigned short var_6 = (unsigned short)61676;
unsigned short var_10 = (unsigned short)46647;
unsigned char var_11 = (unsigned char)186;
signed char var_14 = (signed char)123;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_20 = (short)-13893;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)33;
long long int var_23 = 1273223157514128372LL;
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
