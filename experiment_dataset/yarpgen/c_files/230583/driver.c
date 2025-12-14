#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
unsigned short var_1 = (unsigned short)64660;
unsigned long long int var_3 = 5756159204953608826ULL;
unsigned long long int var_4 = 9603481157609449091ULL;
unsigned int var_5 = 46050342U;
unsigned long long int var_6 = 15782074188402683520ULL;
signed char var_8 = (signed char)-48;
signed char var_9 = (signed char)74;
unsigned short var_10 = (unsigned short)8378;
int zero = 0;
signed char var_11 = (signed char)-21;
unsigned short var_12 = (unsigned short)16132;
signed char var_13 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
