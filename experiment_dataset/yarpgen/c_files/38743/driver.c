#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33500;
unsigned short var_7 = (unsigned short)40094;
short var_15 = (short)-12453;
int zero = 0;
unsigned long long int var_16 = 14400577994033946462ULL;
unsigned short var_17 = (unsigned short)52800;
long long int var_18 = 3925808772729794511LL;
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
