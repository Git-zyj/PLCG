#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -5474127418665011483LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)20061;
signed char var_16 = (signed char)-104;
int zero = 0;
long long int var_20 = -1714584042879381626LL;
unsigned char var_21 = (unsigned char)7;
unsigned short var_22 = (unsigned short)56383;
void init() {
}

void checksum() {
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
