#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41078;
unsigned short var_2 = (unsigned short)56611;
unsigned short var_4 = (unsigned short)8733;
unsigned char var_7 = (unsigned char)0;
int zero = 0;
unsigned long long int var_10 = 12063265406093754587ULL;
unsigned char var_11 = (unsigned char)211;
unsigned short var_12 = (unsigned short)45408;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
