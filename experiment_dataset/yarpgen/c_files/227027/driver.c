#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
unsigned long long int var_3 = 5680563974598791940ULL;
unsigned char var_5 = (unsigned char)161;
unsigned char var_7 = (unsigned char)152;
int zero = 0;
int var_11 = 50558052;
unsigned short var_12 = (unsigned short)24098;
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
