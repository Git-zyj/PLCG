#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19468;
int var_1 = -2020326375;
unsigned int var_2 = 2609330465U;
unsigned int var_3 = 2493127177U;
unsigned int var_4 = 2323800855U;
unsigned int var_6 = 2501939357U;
unsigned int var_7 = 412907588U;
unsigned char var_8 = (unsigned char)11;
unsigned int var_9 = 2759438276U;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -1699095112;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
