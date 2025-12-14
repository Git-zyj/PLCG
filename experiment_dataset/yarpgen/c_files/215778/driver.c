#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1593726179884625187ULL;
int var_6 = -1514072497;
unsigned short var_8 = (unsigned short)6769;
unsigned long long int var_10 = 13147089478347951903ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)53;
unsigned char var_12 = (unsigned char)255;
signed char var_13 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
