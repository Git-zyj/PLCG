#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1229204822;
unsigned short var_12 = (unsigned short)1155;
unsigned long long int var_13 = 15421768597883299978ULL;
short var_14 = (short)-12600;
int zero = 0;
unsigned char var_16 = (unsigned char)217;
int var_17 = 1917033891;
short var_18 = (short)28485;
unsigned short var_19 = (unsigned short)1678;
int var_20 = 1746139517;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
