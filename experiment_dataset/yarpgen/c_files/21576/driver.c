#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53199;
unsigned long long int var_6 = 12824172165065058939ULL;
unsigned short var_10 = (unsigned short)55415;
unsigned long long int var_11 = 14520370149752301115ULL;
unsigned int var_13 = 2380962711U;
unsigned short var_14 = (unsigned short)39802;
int zero = 0;
unsigned char var_16 = (unsigned char)23;
unsigned int var_17 = 4254977646U;
short var_18 = (short)19091;
unsigned char var_19 = (unsigned char)192;
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
