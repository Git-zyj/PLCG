#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17962;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)35;
signed char var_11 = (signed char)-109;
unsigned char var_14 = (unsigned char)208;
unsigned int var_16 = 1931852077U;
int zero = 0;
unsigned short var_18 = (unsigned short)27023;
int var_19 = 276689760;
signed char var_20 = (signed char)-66;
short var_21 = (short)-21304;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
