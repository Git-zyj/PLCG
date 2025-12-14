#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3159480988239728814LL;
int var_2 = 1307742570;
unsigned short var_3 = (unsigned short)31976;
unsigned int var_4 = 1967504878U;
unsigned long long int var_7 = 15381002807012385164ULL;
unsigned char var_8 = (unsigned char)12;
signed char var_11 = (signed char)-102;
int zero = 0;
unsigned char var_12 = (unsigned char)126;
unsigned long long int var_13 = 17575284423685683603ULL;
unsigned int var_14 = 4144000025U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
