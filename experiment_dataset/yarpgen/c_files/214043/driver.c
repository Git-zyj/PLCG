#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6481759068543085461LL;
unsigned char var_5 = (unsigned char)227;
short var_6 = (short)558;
signed char var_7 = (signed char)47;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)40;
_Bool var_16 = (_Bool)1;
short var_17 = (short)1694;
signed char var_18 = (signed char)-60;
int zero = 0;
unsigned short var_19 = (unsigned short)17517;
signed char var_20 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
