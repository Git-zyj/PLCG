#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
signed char var_3 = (signed char)36;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)153;
unsigned char var_7 = (unsigned char)224;
unsigned char var_8 = (unsigned char)86;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 18303189851332769272ULL;
unsigned short var_12 = (unsigned short)34792;
unsigned int var_13 = 507399901U;
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
