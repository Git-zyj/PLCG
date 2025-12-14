#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7020734402024778340ULL;
int var_2 = 266021011;
unsigned long long int var_3 = 1306316498674943457ULL;
unsigned char var_5 = (unsigned char)243;
int var_6 = 256934746;
unsigned long long int var_8 = 5968586814466616065ULL;
int var_9 = -205538651;
int zero = 0;
unsigned long long int var_10 = 5920584015189238028ULL;
unsigned char var_11 = (unsigned char)105;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
