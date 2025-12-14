#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1940189474857648908ULL;
short var_4 = (short)1997;
unsigned long long int var_6 = 10999204120299494986ULL;
unsigned int var_10 = 3415301148U;
unsigned long long int var_11 = 2728105227948492088ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)154;
unsigned char var_14 = (unsigned char)188;
int var_15 = 531834174;
long long int var_16 = -9137074632983873544LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
