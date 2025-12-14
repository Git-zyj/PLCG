#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23407;
unsigned char var_1 = (unsigned char)155;
signed char var_4 = (signed char)121;
unsigned char var_5 = (unsigned char)52;
short var_7 = (short)-2388;
int zero = 0;
short var_15 = (short)-26840;
unsigned long long int var_16 = 18417398600646988172ULL;
unsigned char var_17 = (unsigned char)215;
int var_18 = -2110020022;
unsigned long long int var_19 = 13025939318726587751ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
