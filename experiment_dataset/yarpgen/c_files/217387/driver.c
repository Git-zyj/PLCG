#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
short var_2 = (short)-9239;
unsigned long long int var_3 = 12260016173661098748ULL;
unsigned int var_4 = 1659947864U;
unsigned long long int var_9 = 2946442915724952309ULL;
int var_11 = 1122987821;
unsigned char var_12 = (unsigned char)70;
unsigned short var_13 = (unsigned short)55361;
signed char var_15 = (signed char)6;
int zero = 0;
signed char var_16 = (signed char)46;
signed char var_17 = (signed char)32;
int var_18 = 514946265;
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
