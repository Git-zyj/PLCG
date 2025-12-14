#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)97;
signed char var_2 = (signed char)76;
unsigned char var_3 = (unsigned char)199;
signed char var_5 = (signed char)-8;
signed char var_7 = (signed char)39;
signed char var_10 = (signed char)66;
int zero = 0;
unsigned short var_11 = (unsigned short)991;
unsigned char var_12 = (unsigned char)103;
long long int var_13 = 8192172594792930806LL;
unsigned short var_14 = (unsigned short)18010;
void init() {
}

void checksum() {
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
