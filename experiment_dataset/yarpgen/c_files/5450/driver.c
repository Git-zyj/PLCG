#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
unsigned char var_1 = (unsigned char)52;
unsigned long long int var_4 = 8099019934502073472ULL;
int var_7 = -1175299940;
int zero = 0;
unsigned char var_17 = (unsigned char)73;
unsigned int var_18 = 502726821U;
unsigned char var_19 = (unsigned char)197;
long long int var_20 = 6643298477320108864LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
