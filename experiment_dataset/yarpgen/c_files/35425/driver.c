#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49067;
unsigned short var_4 = (unsigned short)56506;
unsigned char var_5 = (unsigned char)119;
unsigned char var_7 = (unsigned char)25;
unsigned char var_10 = (unsigned char)16;
int var_13 = -261209380;
unsigned short var_15 = (unsigned short)16644;
int zero = 0;
unsigned char var_18 = (unsigned char)98;
unsigned int var_19 = 1203217788U;
unsigned short var_20 = (unsigned short)26398;
void init() {
}

void checksum() {
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
