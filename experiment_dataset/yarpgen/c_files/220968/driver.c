#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)158;
unsigned short var_8 = (unsigned short)37048;
unsigned long long int var_9 = 4669181243815267510ULL;
int zero = 0;
unsigned long long int var_14 = 12447250700288326056ULL;
unsigned short var_15 = (unsigned short)32766;
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
