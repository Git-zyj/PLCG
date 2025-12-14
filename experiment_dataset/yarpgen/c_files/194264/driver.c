#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2535172445262377520ULL;
short var_2 = (short)-2512;
unsigned short var_4 = (unsigned short)22999;
unsigned long long int var_5 = 7741040766859607340ULL;
signed char var_9 = (signed char)43;
short var_12 = (short)-15631;
long long int var_15 = 2883792640289206405LL;
unsigned char var_18 = (unsigned char)92;
signed char var_19 = (signed char)-87;
int zero = 0;
unsigned int var_20 = 3155095125U;
unsigned char var_21 = (unsigned char)84;
signed char var_22 = (signed char)85;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
