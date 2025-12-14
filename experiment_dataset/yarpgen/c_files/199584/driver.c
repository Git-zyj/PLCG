#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)85;
signed char var_3 = (signed char)-75;
unsigned long long int var_4 = 8210659881810718554ULL;
short var_6 = (short)-15291;
unsigned char var_7 = (unsigned char)200;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)55;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = -5525185904811771026LL;
unsigned char var_14 = (unsigned char)208;
signed char var_15 = (signed char)-31;
void init() {
}

void checksum() {
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
