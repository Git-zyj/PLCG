#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 797564332514789399LL;
unsigned char var_5 = (unsigned char)134;
_Bool var_6 = (_Bool)0;
unsigned short var_11 = (unsigned short)49858;
signed char var_12 = (signed char)-52;
unsigned short var_14 = (unsigned short)33940;
int zero = 0;
int var_17 = 719210619;
long long int var_18 = 5865546231159270404LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -6006953723645687842LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
