#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)133;
unsigned char var_2 = (unsigned char)62;
unsigned int var_3 = 1861633707U;
long long int var_5 = -1172433946818580923LL;
unsigned char var_8 = (unsigned char)211;
signed char var_9 = (signed char)38;
int zero = 0;
short var_11 = (short)-27625;
unsigned int var_12 = 3627161004U;
unsigned long long int var_13 = 4372005881834073102ULL;
long long int var_14 = -8630341994545300391LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
