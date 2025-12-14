#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)240;
unsigned char var_2 = (unsigned char)168;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)20714;
unsigned long long int var_9 = 11981711837039676677ULL;
unsigned long long int var_10 = 14590777086040067651ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)239;
signed char var_13 = (signed char)-96;
void init() {
}

void checksum() {
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
