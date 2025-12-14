#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42669;
long long int var_2 = -9154649945797365599LL;
unsigned char var_6 = (unsigned char)232;
unsigned int var_13 = 2723120552U;
int zero = 0;
unsigned int var_16 = 2398940448U;
unsigned int var_17 = 2388094896U;
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
