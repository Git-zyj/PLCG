#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18660;
unsigned char var_1 = (unsigned char)155;
int var_2 = 1055506189;
unsigned short var_5 = (unsigned short)14742;
unsigned long long int var_6 = 1329422101854348184ULL;
signed char var_10 = (signed char)67;
signed char var_13 = (signed char)81;
int zero = 0;
unsigned short var_14 = (unsigned short)43239;
int var_15 = -713802600;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
