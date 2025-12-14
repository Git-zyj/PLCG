#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 599215344;
unsigned char var_7 = (unsigned char)123;
int zero = 0;
long long int var_18 = -1463771332545940579LL;
unsigned short var_19 = (unsigned short)62361;
unsigned char var_20 = (unsigned char)68;
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
