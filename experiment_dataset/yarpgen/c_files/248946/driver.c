#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30095;
short var_1 = (short)4681;
int var_2 = 784475767;
long long int var_5 = 5956895600616859050LL;
signed char var_7 = (signed char)-115;
int zero = 0;
signed char var_11 = (signed char)36;
unsigned long long int var_12 = 13320532711776420080ULL;
int var_13 = -89058686;
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
