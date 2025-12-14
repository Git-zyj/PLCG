#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)35757;
long long int var_5 = 290345325882799302LL;
int var_6 = -1908086604;
unsigned char var_7 = (unsigned char)55;
int zero = 0;
unsigned short var_10 = (unsigned short)52534;
unsigned char var_11 = (unsigned char)208;
unsigned int var_12 = 495821666U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
