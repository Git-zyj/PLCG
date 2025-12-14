#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
_Bool var_2 = (_Bool)1;
short var_4 = (short)1686;
unsigned long long int var_9 = 16748657867318827061ULL;
long long int var_10 = 7604935975356490842LL;
short var_11 = (short)-19809;
int var_14 = 962216014;
int zero = 0;
unsigned short var_17 = (unsigned short)10042;
signed char var_18 = (signed char)50;
short var_19 = (short)23293;
unsigned short var_20 = (unsigned short)62890;
unsigned long long int var_21 = 11148933605241750552ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
