#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)101;
unsigned long long int var_2 = 9042324714792833861ULL;
unsigned char var_3 = (unsigned char)177;
short var_4 = (short)28070;
signed char var_7 = (signed char)43;
unsigned char var_8 = (unsigned char)12;
signed char var_10 = (signed char)0;
unsigned char var_12 = (unsigned char)34;
unsigned char var_14 = (unsigned char)65;
unsigned char var_16 = (unsigned char)118;
int zero = 0;
short var_20 = (short)20316;
signed char var_21 = (signed char)81;
unsigned short var_22 = (unsigned short)28564;
unsigned long long int var_23 = 6006004174118643420ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
