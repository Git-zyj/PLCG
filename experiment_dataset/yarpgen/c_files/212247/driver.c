#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26713;
unsigned long long int var_3 = 13916091423110635115ULL;
short var_5 = (short)18520;
unsigned short var_8 = (unsigned short)36868;
unsigned short var_11 = (unsigned short)45637;
unsigned int var_12 = 2762784595U;
int zero = 0;
short var_15 = (short)-28011;
unsigned int var_16 = 3594206135U;
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
