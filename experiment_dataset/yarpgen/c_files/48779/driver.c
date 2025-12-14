#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2889171713791379154ULL;
unsigned char var_5 = (unsigned char)43;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 18248294378229412600ULL;
int zero = 0;
short var_12 = (short)-19294;
unsigned long long int var_13 = 1749810071874526491ULL;
signed char var_14 = (signed char)-111;
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
