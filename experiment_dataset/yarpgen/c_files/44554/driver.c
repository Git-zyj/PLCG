#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)153;
unsigned short var_4 = (unsigned short)18561;
unsigned short var_6 = (unsigned short)3972;
unsigned short var_11 = (unsigned short)53452;
unsigned short var_13 = (unsigned short)61548;
int zero = 0;
unsigned long long int var_16 = 4510898632500695575ULL;
unsigned char var_17 = (unsigned char)29;
unsigned char var_18 = (unsigned char)140;
unsigned short var_19 = (unsigned short)60980;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
