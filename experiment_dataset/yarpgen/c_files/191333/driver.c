#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)67;
short var_2 = (short)10344;
unsigned long long int var_3 = 11646392487795262694ULL;
signed char var_5 = (signed char)13;
signed char var_6 = (signed char)19;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-13610;
int zero = 0;
unsigned int var_10 = 4206091138U;
unsigned int var_11 = 1946632066U;
long long int var_12 = 7752367513656015322LL;
unsigned short var_13 = (unsigned short)28796;
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
