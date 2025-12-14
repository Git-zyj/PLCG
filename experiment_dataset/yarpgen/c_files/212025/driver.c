#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11705;
int var_3 = 2125904361;
unsigned short var_8 = (unsigned short)61349;
unsigned long long int var_9 = 13250497776754459640ULL;
int var_10 = -2100021176;
int var_11 = 524385450;
unsigned int var_12 = 3824728865U;
unsigned char var_13 = (unsigned char)181;
int zero = 0;
unsigned int var_15 = 298738856U;
unsigned short var_16 = (unsigned short)20660;
signed char var_17 = (signed char)106;
void init() {
}

void checksum() {
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
