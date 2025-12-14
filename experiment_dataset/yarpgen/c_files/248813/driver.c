#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)47;
long long int var_3 = -6367427018832644566LL;
unsigned char var_4 = (unsigned char)230;
short var_10 = (short)-25754;
short var_11 = (short)-11804;
int zero = 0;
unsigned long long int var_12 = 17663187332233970135ULL;
unsigned char var_13 = (unsigned char)250;
signed char var_14 = (signed char)-89;
short var_15 = (short)-10644;
int var_16 = 1839424080;
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
