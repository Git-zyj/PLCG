#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 775869560;
int var_1 = -704055751;
int var_3 = -634017484;
int var_4 = -992675;
int var_5 = 1745358846;
int var_6 = 301769112;
int var_7 = 1762014218;
int zero = 0;
int var_13 = 130036252;
int var_14 = -1205334286;
int var_15 = 1888727816;
int var_16 = -793757199;
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
