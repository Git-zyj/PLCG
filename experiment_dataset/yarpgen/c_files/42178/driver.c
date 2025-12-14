#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1225;
unsigned long long int var_17 = 16101125412733971157ULL;
int zero = 0;
unsigned long long int var_18 = 357912822249842596ULL;
short var_19 = (short)-11839;
unsigned short var_20 = (unsigned short)47374;
void init() {
}

void checksum() {
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
