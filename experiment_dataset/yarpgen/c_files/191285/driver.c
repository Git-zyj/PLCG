#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 76499528036326700ULL;
signed char var_5 = (signed char)-28;
unsigned short var_6 = (unsigned short)33962;
short var_8 = (short)-11204;
unsigned long long int var_9 = 17178345887714780760ULL;
unsigned short var_10 = (unsigned short)61261;
short var_11 = (short)-23824;
int zero = 0;
short var_12 = (short)-31762;
short var_13 = (short)-23288;
unsigned long long int var_14 = 11478287849423408097ULL;
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
