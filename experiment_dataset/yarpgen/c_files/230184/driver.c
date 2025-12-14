#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
signed char var_2 = (signed char)122;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)212;
unsigned long long int var_5 = 5283007445914337448ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)32441;
signed char var_12 = (signed char)-105;
unsigned short var_13 = (unsigned short)14029;
signed char var_14 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
