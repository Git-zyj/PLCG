#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
short var_2 = (short)-27346;
_Bool var_3 = (_Bool)1;
short var_6 = (short)7604;
unsigned short var_7 = (unsigned short)55864;
unsigned short var_9 = (unsigned short)20512;
long long int var_10 = -1541555649001217552LL;
short var_11 = (short)30720;
int zero = 0;
unsigned char var_12 = (unsigned char)251;
signed char var_13 = (signed char)59;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)4;
void init() {
}

void checksum() {
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
