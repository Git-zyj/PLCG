#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)204;
short var_3 = (short)-13053;
_Bool var_4 = (_Bool)0;
long long int var_6 = -4448392846388822991LL;
unsigned char var_8 = (unsigned char)109;
unsigned char var_10 = (unsigned char)19;
int zero = 0;
long long int var_11 = -5822451408706396239LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)67;
unsigned short var_14 = (unsigned short)56893;
unsigned long long int var_15 = 5797878347017431085ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
