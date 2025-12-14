#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1462738541;
unsigned short var_3 = (unsigned short)39644;
unsigned char var_5 = (unsigned char)78;
unsigned long long int var_7 = 12372505215660418783ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 8535160389868293136ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-60;
signed char var_14 = (signed char)-32;
signed char var_15 = (signed char)83;
signed char var_16 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
