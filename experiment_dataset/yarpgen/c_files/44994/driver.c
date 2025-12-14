#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)52706;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 2453014195862305696ULL;
int var_11 = 2046480081;
unsigned short var_12 = (unsigned short)33630;
int zero = 0;
unsigned short var_14 = (unsigned short)47531;
unsigned char var_15 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
