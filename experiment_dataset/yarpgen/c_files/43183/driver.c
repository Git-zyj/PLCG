#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2789;
short var_4 = (short)30415;
int var_6 = 1547253842;
long long int var_10 = -405959611222645364LL;
int var_11 = 923343987;
int zero = 0;
unsigned short var_12 = (unsigned short)55112;
short var_13 = (short)10697;
signed char var_14 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
