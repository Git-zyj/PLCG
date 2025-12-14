#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1648062325;
long long int var_1 = -1083150115402258640LL;
unsigned char var_7 = (unsigned char)240;
unsigned int var_13 = 2898666643U;
int var_14 = 1553851925;
signed char var_15 = (signed char)46;
unsigned int var_16 = 1038656623U;
int zero = 0;
short var_18 = (short)-25794;
long long int var_19 = -348717673501850891LL;
long long int var_20 = -413933568949693959LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
