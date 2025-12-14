#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6175038332898870828ULL;
long long int var_15 = -5141987712657531390LL;
short var_17 = (short)-31021;
int zero = 0;
long long int var_18 = -6205446908204209104LL;
short var_19 = (short)19766;
void init() {
}

void checksum() {
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
