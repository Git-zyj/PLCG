#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 695797908;
short var_2 = (short)-8584;
signed char var_3 = (signed char)10;
signed char var_4 = (signed char)17;
signed char var_5 = (signed char)-42;
int var_8 = 389954133;
int zero = 0;
short var_10 = (short)20128;
long long int var_11 = -1572486963208793333LL;
unsigned short var_12 = (unsigned short)61201;
int var_13 = -2109591922;
signed char var_14 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
