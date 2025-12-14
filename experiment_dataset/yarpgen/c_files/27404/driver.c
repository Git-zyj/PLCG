#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)6472;
unsigned long long int var_11 = 16551932797552261042ULL;
int var_16 = -534710998;
int zero = 0;
unsigned short var_18 = (unsigned short)12892;
unsigned long long int var_19 = 8493176909332821530ULL;
int var_20 = 1873805723;
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
