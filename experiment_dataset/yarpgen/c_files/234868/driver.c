#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4256430367407579497LL;
short var_4 = (short)-2926;
unsigned int var_5 = 673013828U;
unsigned int var_6 = 226473873U;
unsigned int var_8 = 613277928U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)40046;
unsigned short var_11 = (unsigned short)18483;
int var_12 = 685899931;
short var_13 = (short)24252;
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
