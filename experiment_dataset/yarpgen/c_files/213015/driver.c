#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1453306768;
long long int var_3 = 7221710906299587003LL;
short var_4 = (short)18651;
short var_7 = (short)-18415;
signed char var_8 = (signed char)-27;
unsigned char var_9 = (unsigned char)97;
long long int var_10 = 1239251075514422561LL;
int zero = 0;
unsigned int var_11 = 1860117427U;
unsigned char var_12 = (unsigned char)126;
unsigned short var_13 = (unsigned short)55837;
short var_14 = (short)5305;
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
