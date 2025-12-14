#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1823639872U;
signed char var_2 = (signed char)-50;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)56354;
unsigned short var_5 = (unsigned short)39773;
unsigned short var_9 = (unsigned short)14721;
int zero = 0;
unsigned char var_10 = (unsigned char)2;
unsigned char var_11 = (unsigned char)36;
long long int var_12 = 8942933922829549411LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
