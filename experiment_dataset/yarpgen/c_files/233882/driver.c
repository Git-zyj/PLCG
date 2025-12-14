#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13391749979497202555ULL;
unsigned int var_3 = 31797530U;
int var_4 = 1820189748;
unsigned char var_5 = (unsigned char)157;
unsigned int var_6 = 3047994219U;
short var_7 = (short)32579;
signed char var_12 = (signed char)103;
int zero = 0;
long long int var_14 = -521487652624837184LL;
signed char var_15 = (signed char)85;
short var_16 = (short)1333;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
