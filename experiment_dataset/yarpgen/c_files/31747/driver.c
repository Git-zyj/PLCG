#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 448750520U;
unsigned short var_12 = (unsigned short)57597;
unsigned long long int var_14 = 355575726309622054ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)23;
unsigned int var_18 = 616699958U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
