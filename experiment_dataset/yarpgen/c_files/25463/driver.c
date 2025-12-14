#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)25530;
unsigned char var_6 = (unsigned char)199;
unsigned long long int var_11 = 12017853276634875449ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)11727;
unsigned char var_21 = (unsigned char)153;
unsigned char var_22 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
