#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8430425385026542630ULL;
unsigned short var_2 = (unsigned short)27695;
signed char var_5 = (signed char)-71;
unsigned char var_6 = (unsigned char)255;
unsigned long long int var_9 = 18402191097059337905ULL;
unsigned char var_10 = (unsigned char)53;
unsigned char var_11 = (unsigned char)58;
unsigned char var_13 = (unsigned char)127;
int zero = 0;
unsigned short var_14 = (unsigned short)201;
unsigned char var_15 = (unsigned char)100;
unsigned char var_16 = (unsigned char)72;
unsigned long long int var_17 = 2782992149697483683ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
