#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)1;
unsigned char var_2 = (unsigned char)194;
unsigned char var_5 = (unsigned char)168;
unsigned char var_7 = (unsigned char)106;
short var_8 = (short)-8849;
unsigned char var_9 = (unsigned char)109;
unsigned char var_11 = (unsigned char)211;
int zero = 0;
short var_14 = (short)10630;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-21776;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
