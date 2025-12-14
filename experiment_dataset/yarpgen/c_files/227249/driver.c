#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 700976140953829706ULL;
unsigned short var_4 = (unsigned short)28972;
long long int var_8 = -7168188194444065858LL;
int var_9 = 1123651765;
int var_11 = -1421204585;
signed char var_12 = (signed char)-62;
unsigned long long int var_13 = 7777764528756392865ULL;
signed char var_14 = (signed char)57;
int zero = 0;
unsigned char var_20 = (unsigned char)151;
unsigned char var_21 = (unsigned char)240;
short var_22 = (short)5433;
unsigned int var_23 = 2476683798U;
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
