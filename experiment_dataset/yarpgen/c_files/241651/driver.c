#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5700;
short var_5 = (short)17649;
unsigned long long int var_8 = 14727750975585200665ULL;
int var_12 = 40129334;
int zero = 0;
unsigned int var_13 = 250161992U;
long long int var_14 = 6046088609588789538LL;
signed char var_15 = (signed char)-120;
short var_16 = (short)-3756;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
