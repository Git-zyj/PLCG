#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20338;
unsigned char var_4 = (unsigned char)115;
short var_6 = (short)1536;
signed char var_7 = (signed char)-47;
unsigned short var_8 = (unsigned short)52417;
int var_9 = -154485996;
unsigned char var_11 = (unsigned char)53;
short var_13 = (short)-31069;
int zero = 0;
unsigned short var_16 = (unsigned short)31198;
signed char var_17 = (signed char)-70;
unsigned char var_18 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
