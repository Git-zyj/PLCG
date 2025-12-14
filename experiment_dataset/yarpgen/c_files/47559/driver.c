#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)20614;
short var_4 = (short)28940;
long long int var_5 = 2228429903989468700LL;
signed char var_8 = (signed char)-66;
unsigned char var_11 = (unsigned char)1;
int zero = 0;
unsigned char var_12 = (unsigned char)177;
short var_13 = (short)3044;
unsigned char var_14 = (unsigned char)254;
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
