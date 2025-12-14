#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17759749275765686411ULL;
unsigned char var_5 = (unsigned char)18;
unsigned long long int var_11 = 17232354459183780067ULL;
unsigned long long int var_13 = 8715584700348211513ULL;
unsigned long long int var_14 = 7969551298185875512ULL;
short var_15 = (short)2318;
int zero = 0;
unsigned char var_18 = (unsigned char)32;
unsigned long long int var_19 = 5991671521814790411ULL;
unsigned char var_20 = (unsigned char)128;
unsigned long long int var_21 = 1617224438949206003ULL;
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
