#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
short var_1 = (short)25424;
unsigned int var_2 = 1249923201U;
long long int var_3 = 8715327467799808761LL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)2146;
int zero = 0;
int var_10 = -1272029384;
unsigned short var_11 = (unsigned short)59159;
unsigned int var_12 = 2156834445U;
long long int var_13 = 5591099613414221282LL;
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
