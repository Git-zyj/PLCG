#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
signed char var_4 = (signed char)99;
unsigned long long int var_5 = 15347060296586784445ULL;
short var_10 = (short)21660;
int var_11 = -1384884611;
int zero = 0;
int var_12 = -1232369871;
signed char var_13 = (signed char)-61;
signed char var_14 = (signed char)-77;
int var_15 = 2139228135;
void init() {
}

void checksum() {
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
