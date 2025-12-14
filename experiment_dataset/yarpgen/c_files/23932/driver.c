#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36830;
int var_2 = 1555934318;
unsigned short var_14 = (unsigned short)5397;
int zero = 0;
unsigned int var_18 = 1987000925U;
short var_19 = (short)19142;
long long int var_20 = 2333957654487679156LL;
unsigned long long int var_21 = 625990071315424946ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
