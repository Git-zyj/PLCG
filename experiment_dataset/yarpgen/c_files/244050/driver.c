#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2046780483;
short var_2 = (short)5852;
int var_7 = 1549999989;
unsigned char var_8 = (unsigned char)57;
unsigned long long int var_11 = 2759547468170435410ULL;
int zero = 0;
unsigned long long int var_12 = 9842147885309686451ULL;
unsigned long long int var_13 = 16462260870432137907ULL;
short var_14 = (short)8586;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
