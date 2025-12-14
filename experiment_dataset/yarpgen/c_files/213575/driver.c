#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3245031457U;
unsigned short var_6 = (unsigned short)15217;
unsigned char var_11 = (unsigned char)252;
unsigned int var_13 = 1238541710U;
unsigned short var_14 = (unsigned short)19440;
int zero = 0;
unsigned short var_16 = (unsigned short)15540;
signed char var_17 = (signed char)-124;
unsigned char var_18 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
