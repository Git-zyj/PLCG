#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)229;
unsigned char var_4 = (unsigned char)151;
unsigned char var_5 = (unsigned char)194;
unsigned char var_12 = (unsigned char)209;
unsigned char var_13 = (unsigned char)228;
int zero = 0;
unsigned char var_16 = (unsigned char)104;
unsigned char var_17 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
