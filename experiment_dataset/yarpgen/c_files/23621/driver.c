#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13761367177740247194ULL;
short var_4 = (short)836;
signed char var_10 = (signed char)-112;
int zero = 0;
signed char var_11 = (signed char)90;
signed char var_12 = (signed char)-113;
unsigned char var_13 = (unsigned char)232;
unsigned long long int var_14 = 15075873602036749991ULL;
short var_15 = (short)28619;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
