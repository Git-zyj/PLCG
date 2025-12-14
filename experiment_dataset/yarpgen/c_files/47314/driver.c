#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 629492192U;
unsigned char var_8 = (unsigned char)15;
unsigned short var_16 = (unsigned short)53092;
int zero = 0;
unsigned int var_17 = 541690046U;
unsigned short var_18 = (unsigned short)46026;
unsigned long long int var_19 = 8709174863026554628ULL;
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
