#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1882830917U;
unsigned char var_2 = (unsigned char)27;
unsigned long long int var_4 = 684936080652465105ULL;
int var_5 = -1159463648;
int var_11 = -815919496;
unsigned long long int var_15 = 7943921885071667366ULL;
unsigned char var_16 = (unsigned char)138;
int zero = 0;
signed char var_17 = (signed char)-29;
unsigned char var_18 = (unsigned char)105;
unsigned char var_19 = (unsigned char)252;
long long int var_20 = -4319435499852915706LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
