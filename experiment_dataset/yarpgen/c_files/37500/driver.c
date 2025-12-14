#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8510030005694254901LL;
unsigned char var_7 = (unsigned char)62;
int var_9 = -2122496587;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)47;
unsigned long long int var_12 = 16145866217028452573ULL;
unsigned long long int var_14 = 9833730488420202518ULL;
short var_15 = (short)-7144;
signed char var_16 = (signed char)71;
signed char var_19 = (signed char)27;
int zero = 0;
long long int var_20 = 4963976769656660380LL;
short var_21 = (short)29047;
signed char var_22 = (signed char)-34;
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
