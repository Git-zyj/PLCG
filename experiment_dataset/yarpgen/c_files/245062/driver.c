#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11755691272925255366ULL;
unsigned long long int var_4 = 5421306696971057991ULL;
unsigned short var_12 = (unsigned short)11839;
short var_15 = (short)12108;
unsigned long long int var_16 = 6389179150431359514ULL;
unsigned long long int var_17 = 6258194530250508237ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 13636906207280820811ULL;
unsigned long long int var_21 = 13858998449953951623ULL;
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
