#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)135;
int var_8 = -1399075955;
unsigned long long int var_10 = 3598126126954163475ULL;
unsigned short var_12 = (unsigned short)47271;
int zero = 0;
unsigned long long int var_14 = 5812961127577973453ULL;
unsigned char var_15 = (unsigned char)255;
unsigned short var_16 = (unsigned short)5344;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
