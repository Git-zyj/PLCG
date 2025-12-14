#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 329288883516813634LL;
unsigned short var_1 = (unsigned short)56300;
long long int var_4 = -4169453083750784295LL;
long long int var_5 = -3650766327688962375LL;
unsigned short var_7 = (unsigned short)24460;
long long int var_8 = 3324639380852310008LL;
int zero = 0;
int var_10 = -1853482700;
int var_11 = 1633053128;
long long int var_12 = 3395892539523328294LL;
long long int var_13 = 4945283726929294800LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
