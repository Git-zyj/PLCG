#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9089388611275512046ULL;
long long int var_1 = -758985996047327912LL;
long long int var_3 = 4767157867783441318LL;
unsigned short var_5 = (unsigned short)41823;
int var_6 = 1605994241;
unsigned int var_10 = 1887794644U;
int zero = 0;
unsigned int var_11 = 3746869836U;
int var_12 = -1503940539;
unsigned short var_13 = (unsigned short)475;
void init() {
}

void checksum() {
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
