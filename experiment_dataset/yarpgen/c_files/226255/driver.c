#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)86;
unsigned short var_5 = (unsigned short)12064;
unsigned long long int var_8 = 5446779586837574638ULL;
unsigned long long int var_9 = 5087385390505439261ULL;
unsigned short var_10 = (unsigned short)26914;
int zero = 0;
unsigned short var_17 = (unsigned short)10123;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
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
