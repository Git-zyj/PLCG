#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -879983330;
int var_2 = -401995591;
unsigned long long int var_3 = 4018653602515144123ULL;
unsigned int var_7 = 1991637251U;
unsigned char var_9 = (unsigned char)106;
int var_10 = 132124443;
int zero = 0;
short var_11 = (short)-10702;
unsigned short var_12 = (unsigned short)14092;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
