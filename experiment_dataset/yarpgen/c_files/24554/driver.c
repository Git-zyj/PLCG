#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 200897971768654146LL;
int var_2 = -1480369657;
long long int var_3 = -9026738554348748152LL;
signed char var_5 = (signed char)-103;
signed char var_6 = (signed char)60;
unsigned char var_8 = (unsigned char)21;
unsigned long long int var_9 = 1668848295556763532ULL;
unsigned char var_12 = (unsigned char)216;
unsigned int var_13 = 1633464445U;
int zero = 0;
signed char var_14 = (signed char)-24;
short var_15 = (short)-23938;
short var_16 = (short)15769;
unsigned short var_17 = (unsigned short)42558;
void init() {
}

void checksum() {
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
