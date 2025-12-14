#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)63;
unsigned char var_2 = (unsigned char)182;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int var_10 = -1014813152;
int var_11 = -556965871;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)11925;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
