#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17311;
unsigned short var_1 = (unsigned short)18999;
unsigned short var_2 = (unsigned short)39828;
unsigned long long int var_3 = 7577990501357012415ULL;
short var_4 = (short)19910;
int var_5 = 1462921850;
signed char var_7 = (signed char)-51;
unsigned long long int var_8 = 10833492429793354142ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 2493576019U;
int var_15 = -1262523240;
int zero = 0;
signed char var_16 = (signed char)85;
signed char var_17 = (signed char)66;
unsigned short var_18 = (unsigned short)7133;
short var_19 = (short)-29651;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
