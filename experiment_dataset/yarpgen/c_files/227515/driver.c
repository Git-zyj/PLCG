#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -1182329370;
unsigned int var_13 = 1004907208U;
unsigned long long int var_15 = 11801375089711853689ULL;
int zero = 0;
unsigned int var_17 = 3346250029U;
unsigned short var_18 = (unsigned short)44104;
int var_19 = -1701856934;
int var_20 = -27526248;
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
