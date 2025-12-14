#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4778412196912883375LL;
short var_11 = (short)-27691;
int var_14 = -549711400;
signed char var_15 = (signed char)-90;
int var_16 = 85004113;
short var_17 = (short)14037;
int zero = 0;
signed char var_19 = (signed char)8;
int var_20 = 1842615916;
int var_21 = -473732813;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
