#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-88;
unsigned char var_6 = (unsigned char)232;
_Bool var_7 = (_Bool)0;
unsigned short var_16 = (unsigned short)5589;
unsigned long long int var_19 = 10829046793231101162ULL;
int zero = 0;
signed char var_20 = (signed char)-123;
short var_21 = (short)-24139;
unsigned char var_22 = (unsigned char)12;
unsigned long long int var_23 = 3394950226700385072ULL;
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
