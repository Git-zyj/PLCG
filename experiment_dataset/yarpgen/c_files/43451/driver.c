#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4484115370759566641LL;
unsigned char var_2 = (unsigned char)188;
int var_5 = 920674836;
signed char var_7 = (signed char)-100;
unsigned long long int var_11 = 3491182339463713637ULL;
unsigned short var_12 = (unsigned short)42884;
int zero = 0;
long long int var_14 = -3798242524382753344LL;
int var_15 = 184312117;
signed char var_16 = (signed char)-67;
void init() {
}

void checksum() {
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
