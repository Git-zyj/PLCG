#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)218;
unsigned char var_4 = (unsigned char)93;
_Bool var_5 = (_Bool)0;
int var_6 = 1668204096;
int var_7 = -1277714717;
int var_8 = 880690942;
int var_11 = -344155775;
unsigned char var_14 = (unsigned char)162;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)76;
void init() {
}

void checksum() {
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
