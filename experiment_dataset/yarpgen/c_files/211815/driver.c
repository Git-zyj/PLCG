#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10867958904580252883ULL;
unsigned short var_5 = (unsigned short)15798;
short var_9 = (short)31507;
unsigned char var_11 = (unsigned char)142;
unsigned short var_15 = (unsigned short)32250;
int zero = 0;
unsigned short var_16 = (unsigned short)55505;
unsigned int var_17 = 1510202503U;
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
