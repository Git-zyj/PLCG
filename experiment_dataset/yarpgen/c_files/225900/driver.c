#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1014475714;
unsigned char var_8 = (unsigned char)189;
int var_11 = 562099663;
int var_14 = -1236493100;
unsigned char var_16 = (unsigned char)170;
unsigned char var_17 = (unsigned char)21;
unsigned char var_18 = (unsigned char)51;
int zero = 0;
unsigned long long int var_20 = 13976659172277691372ULL;
unsigned long long int var_21 = 4834134513975277440ULL;
void init() {
}

void checksum() {
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
