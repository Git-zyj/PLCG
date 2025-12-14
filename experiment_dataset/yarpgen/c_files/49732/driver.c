#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
unsigned char var_2 = (unsigned char)133;
int var_6 = 1300014029;
signed char var_11 = (signed char)-99;
int var_12 = 1356479273;
signed char var_14 = (signed char)56;
short var_15 = (short)-7746;
int zero = 0;
unsigned long long int var_18 = 5928890048256421011ULL;
unsigned short var_19 = (unsigned short)32932;
int var_20 = -355763384;
unsigned short var_21 = (unsigned short)11981;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
