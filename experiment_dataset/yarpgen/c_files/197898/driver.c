#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
signed char var_1 = (signed char)50;
signed char var_2 = (signed char)-35;
short var_3 = (short)6891;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 7744203676852242450ULL;
unsigned char var_8 = (unsigned char)66;
unsigned char var_9 = (unsigned char)200;
signed char var_11 = (signed char)71;
short var_13 = (short)30603;
int zero = 0;
signed char var_14 = (signed char)-123;
unsigned long long int var_15 = 4116997179739739127ULL;
unsigned long long int var_16 = 11227564802711083247ULL;
unsigned short var_17 = (unsigned short)19980;
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
