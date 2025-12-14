#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)49;
long long int var_5 = 7456561349928132423LL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)147;
unsigned short var_11 = (unsigned short)4754;
unsigned char var_12 = (unsigned char)93;
short var_13 = (short)-7177;
signed char var_14 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
