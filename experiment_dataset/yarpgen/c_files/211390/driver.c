#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2003636514U;
short var_1 = (short)12560;
signed char var_3 = (signed char)-78;
unsigned char var_4 = (unsigned char)81;
short var_6 = (short)-2041;
int var_8 = -679115115;
int zero = 0;
unsigned char var_10 = (unsigned char)98;
unsigned int var_11 = 3644194612U;
_Bool var_12 = (_Bool)0;
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
