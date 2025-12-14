#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55590;
short var_1 = (short)-14413;
unsigned long long int var_2 = 10687546439595151448ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)269;
short var_8 = (short)-10758;
unsigned long long int var_9 = 17819559344979992863ULL;
int zero = 0;
unsigned int var_10 = 2206056861U;
unsigned short var_11 = (unsigned short)59448;
unsigned char var_12 = (unsigned char)243;
unsigned int var_13 = 2694240994U;
long long int var_14 = -4276447221255032088LL;
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
