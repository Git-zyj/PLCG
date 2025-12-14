#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-24;
unsigned short var_4 = (unsigned short)38824;
unsigned short var_10 = (unsigned short)62367;
signed char var_12 = (signed char)-21;
long long int var_13 = 3309556106458218165LL;
int zero = 0;
signed char var_16 = (signed char)98;
signed char var_17 = (signed char)115;
signed char var_18 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
