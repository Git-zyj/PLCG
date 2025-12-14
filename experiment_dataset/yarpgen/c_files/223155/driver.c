#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
signed char var_5 = (signed char)46;
int var_10 = 1401404867;
unsigned short var_12 = (unsigned short)6322;
int var_14 = 1083151630;
int zero = 0;
int var_15 = 626224121;
signed char var_16 = (signed char)-4;
unsigned char var_17 = (unsigned char)149;
void init() {
}

void checksum() {
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
