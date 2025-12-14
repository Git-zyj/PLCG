#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-57;
unsigned int var_4 = 1555560407U;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)60195;
unsigned char var_13 = (unsigned char)22;
int var_17 = 823736790;
int zero = 0;
long long int var_18 = 4169916562402364594LL;
short var_19 = (short)14304;
short var_20 = (short)29435;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
