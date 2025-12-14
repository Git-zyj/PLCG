#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5704671550939580175ULL;
unsigned int var_1 = 4275176308U;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 16221489654815455549ULL;
short var_4 = (short)-21383;
unsigned char var_5 = (unsigned char)207;
short var_6 = (short)29091;
unsigned short var_8 = (unsigned short)56571;
long long int var_9 = -2717340591042737008LL;
unsigned char var_10 = (unsigned char)65;
int zero = 0;
unsigned int var_11 = 2698845084U;
unsigned char var_12 = (unsigned char)96;
unsigned char var_13 = (unsigned char)38;
_Bool var_14 = (_Bool)1;
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
