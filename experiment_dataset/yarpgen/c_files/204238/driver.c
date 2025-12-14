#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)98;
unsigned char var_4 = (unsigned char)107;
unsigned char var_5 = (unsigned char)98;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_17 = 1954643331;
unsigned char var_18 = (unsigned char)28;
short var_19 = (short)-27893;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
