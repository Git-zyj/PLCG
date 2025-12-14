#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)3275;
int var_16 = -1882114759;
int zero = 0;
int var_19 = 1295655342;
unsigned short var_20 = (unsigned short)61201;
int var_21 = -1276308609;
int var_22 = -1074456322;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
