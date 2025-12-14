#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19953;
short var_4 = (short)18627;
int var_7 = 1747730881;
unsigned char var_8 = (unsigned char)81;
short var_9 = (short)14455;
signed char var_10 = (signed char)-115;
unsigned char var_11 = (unsigned char)199;
int zero = 0;
long long int var_13 = 2879255327114864287LL;
short var_14 = (short)-29971;
unsigned short var_15 = (unsigned short)1482;
int var_16 = 1895541419;
unsigned short var_17 = (unsigned short)29518;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
