#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12768;
unsigned short var_1 = (unsigned short)54047;
int var_2 = 1897423439;
unsigned long long int var_3 = 4132598720855835378ULL;
unsigned long long int var_4 = 6814024129460242572ULL;
unsigned short var_7 = (unsigned short)21408;
signed char var_8 = (signed char)-127;
unsigned long long int var_10 = 12651547588825399887ULL;
unsigned char var_11 = (unsigned char)230;
unsigned short var_12 = (unsigned short)23380;
unsigned char var_14 = (unsigned char)93;
int zero = 0;
unsigned int var_15 = 816189622U;
unsigned char var_16 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
