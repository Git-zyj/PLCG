#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)236;
unsigned char var_4 = (unsigned char)42;
long long int var_5 = -6112934846644704487LL;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)-92;
short var_11 = (short)-7900;
int zero = 0;
signed char var_12 = (signed char)-48;
unsigned char var_13 = (unsigned char)60;
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
