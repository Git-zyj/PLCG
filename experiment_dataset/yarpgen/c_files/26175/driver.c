#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51052;
short var_8 = (short)-28512;
int zero = 0;
unsigned long long int var_11 = 8491769427359865947ULL;
unsigned char var_12 = (unsigned char)132;
signed char var_13 = (signed char)-73;
int var_14 = -1641163460;
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
