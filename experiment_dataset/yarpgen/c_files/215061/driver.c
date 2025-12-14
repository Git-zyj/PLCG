#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9586444462749115681ULL;
short var_7 = (short)1538;
short var_8 = (short)-2262;
int zero = 0;
unsigned short var_10 = (unsigned short)30644;
signed char var_11 = (signed char)26;
unsigned char var_12 = (unsigned char)68;
unsigned int var_13 = 2640804167U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
