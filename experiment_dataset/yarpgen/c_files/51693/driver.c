#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 505587068;
unsigned char var_4 = (unsigned char)43;
unsigned int var_9 = 4164441594U;
unsigned short var_11 = (unsigned short)18762;
unsigned int var_14 = 1320059500U;
unsigned int var_15 = 101293372U;
unsigned long long int var_16 = 15362006127680846602ULL;
unsigned long long int var_17 = 5879024948812950156ULL;
int var_18 = -1789435816;
int zero = 0;
unsigned int var_20 = 1020669648U;
unsigned short var_21 = (unsigned short)63158;
unsigned short var_22 = (unsigned short)54990;
unsigned short var_23 = (unsigned short)41427;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
