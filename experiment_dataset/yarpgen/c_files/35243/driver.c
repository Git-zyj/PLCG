#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)8;
int var_8 = 1408482805;
unsigned char var_12 = (unsigned char)142;
int zero = 0;
long long int var_16 = 4883355125911776774LL;
int var_17 = -226641976;
signed char var_18 = (signed char)117;
short var_19 = (short)-14938;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
