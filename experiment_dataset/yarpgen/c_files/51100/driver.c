#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 368980052118758996LL;
_Bool var_2 = (_Bool)1;
signed char var_9 = (signed char)-83;
unsigned short var_10 = (unsigned short)36909;
unsigned char var_11 = (unsigned char)166;
int zero = 0;
unsigned short var_12 = (unsigned short)42700;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
