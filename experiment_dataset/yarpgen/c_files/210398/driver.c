#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 142071814U;
int var_8 = 1523632326;
unsigned char var_9 = (unsigned char)63;
short var_10 = (short)-2199;
int zero = 0;
unsigned int var_13 = 2935929891U;
long long int var_14 = -2011528615787271304LL;
unsigned short var_15 = (unsigned short)34180;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
