#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15556;
unsigned short var_4 = (unsigned short)5193;
unsigned short var_7 = (unsigned short)57598;
unsigned short var_8 = (unsigned short)51417;
int zero = 0;
unsigned char var_10 = (unsigned char)146;
unsigned char var_11 = (unsigned char)37;
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
