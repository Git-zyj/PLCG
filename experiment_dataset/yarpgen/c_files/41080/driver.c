#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1955923292;
long long int var_4 = 5834952888334292934LL;
int var_10 = -2024333435;
int var_12 = 894406664;
int var_15 = 357003170;
int zero = 0;
long long int var_18 = 7109027629717194941LL;
unsigned char var_19 = (unsigned char)39;
unsigned int var_20 = 2215997939U;
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
