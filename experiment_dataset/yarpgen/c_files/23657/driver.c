#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1108814803;
int var_4 = -1841794502;
short var_5 = (short)-16061;
unsigned short var_10 = (unsigned short)36827;
int zero = 0;
long long int var_12 = -639606912980551429LL;
unsigned short var_13 = (unsigned short)25259;
void init() {
}

void checksum() {
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
