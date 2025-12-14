#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7300;
long long int var_2 = 5441290032544241358LL;
int var_3 = -450277386;
signed char var_4 = (signed char)9;
unsigned char var_5 = (unsigned char)216;
long long int var_6 = 6059992901426345930LL;
unsigned long long int var_9 = 10326508943899186196ULL;
unsigned short var_10 = (unsigned short)63514;
int zero = 0;
unsigned short var_13 = (unsigned short)40301;
unsigned short var_14 = (unsigned short)47047;
unsigned char var_15 = (unsigned char)251;
unsigned char var_16 = (unsigned char)149;
int var_17 = 1188580796;
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
