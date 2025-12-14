#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13258;
long long int var_1 = 6621567052628805032LL;
long long int var_3 = -5886429629618898927LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -1408944972986064767LL;
unsigned char var_8 = (unsigned char)116;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
