#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3512845115061224140ULL;
short var_6 = (short)-23669;
unsigned short var_12 = (unsigned short)43443;
unsigned int var_15 = 2806270726U;
int var_16 = 1441794726;
int zero = 0;
unsigned int var_17 = 881602035U;
short var_18 = (short)9592;
unsigned long long int var_19 = 11454555440856198140ULL;
void init() {
}

void checksum() {
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
