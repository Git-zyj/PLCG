#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1359800179;
unsigned long long int var_2 = 7479643353989186715ULL;
unsigned int var_8 = 1845972123U;
unsigned short var_9 = (unsigned short)26841;
unsigned long long int var_11 = 16917325637519322743ULL;
unsigned char var_13 = (unsigned char)89;
int var_14 = 239739212;
int zero = 0;
unsigned short var_17 = (unsigned short)18464;
unsigned short var_18 = (unsigned short)13365;
unsigned short var_19 = (unsigned short)36034;
unsigned short var_20 = (unsigned short)12682;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
