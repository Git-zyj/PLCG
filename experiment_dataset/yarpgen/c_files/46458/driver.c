#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -264605700;
short var_3 = (short)-20957;
signed char var_8 = (signed char)115;
unsigned short var_9 = (unsigned short)60292;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)28997;
unsigned short var_12 = (unsigned short)10155;
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
