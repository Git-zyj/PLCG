#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
unsigned short var_1 = (unsigned short)17823;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)11069;
short var_10 = (short)-3081;
short var_11 = (short)20451;
int zero = 0;
unsigned char var_12 = (unsigned char)64;
unsigned char var_13 = (unsigned char)159;
short var_14 = (short)9544;
short var_15 = (short)-7277;
unsigned char var_16 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
