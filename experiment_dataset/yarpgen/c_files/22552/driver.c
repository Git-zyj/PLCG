#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)30;
unsigned char var_3 = (unsigned char)50;
unsigned short var_5 = (unsigned short)30560;
signed char var_6 = (signed char)-12;
unsigned short var_8 = (unsigned short)43840;
int var_11 = -1615618796;
int zero = 0;
short var_13 = (short)-21945;
_Bool var_14 = (_Bool)0;
short var_15 = (short)16817;
void init() {
}

void checksum() {
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
