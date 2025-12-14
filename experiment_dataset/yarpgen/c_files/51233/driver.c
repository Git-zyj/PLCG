#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
int var_1 = -2127456155;
signed char var_2 = (signed char)-94;
unsigned int var_4 = 502812179U;
signed char var_8 = (signed char)-116;
_Bool var_13 = (_Bool)0;
short var_16 = (short)23774;
signed char var_18 = (signed char)117;
int zero = 0;
unsigned int var_19 = 2579847178U;
short var_20 = (short)11790;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
