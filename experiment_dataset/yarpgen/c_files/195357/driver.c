#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)113;
unsigned short var_2 = (unsigned short)30593;
unsigned char var_3 = (unsigned char)119;
unsigned long long int var_4 = 2148050876043947604ULL;
int var_6 = -1247050412;
unsigned int var_7 = 355315131U;
unsigned short var_8 = (unsigned short)16515;
unsigned long long int var_9 = 10350848397892284690ULL;
int zero = 0;
signed char var_11 = (signed char)53;
int var_12 = 1135015546;
signed char var_13 = (signed char)71;
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
