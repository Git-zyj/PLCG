#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16178;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-3730;
short var_6 = (short)-24564;
unsigned char var_7 = (unsigned char)153;
short var_9 = (short)-15461;
long long int var_11 = 8758594800088724717LL;
unsigned long long int var_12 = 12774430783513033905ULL;
unsigned short var_13 = (unsigned short)632;
short var_15 = (short)81;
short var_16 = (short)-4275;
int zero = 0;
unsigned short var_17 = (unsigned short)1207;
int var_18 = 1729454609;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)35519;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
