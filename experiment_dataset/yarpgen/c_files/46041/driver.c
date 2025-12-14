#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64704;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)67;
int var_10 = -1301110946;
unsigned char var_11 = (unsigned char)137;
unsigned char var_12 = (unsigned char)210;
int zero = 0;
signed char var_13 = (signed char)-13;
int var_14 = -2081494938;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
