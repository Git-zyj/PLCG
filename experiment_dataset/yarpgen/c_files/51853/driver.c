#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
short var_3 = (short)-24325;
signed char var_4 = (signed char)-44;
unsigned int var_5 = 3508939270U;
unsigned char var_6 = (unsigned char)239;
long long int var_7 = 3336576269195284525LL;
unsigned int var_11 = 508414760U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3619829510U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
