#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56055;
unsigned short var_2 = (unsigned short)38147;
unsigned char var_5 = (unsigned char)28;
long long int var_6 = -3606070873735053645LL;
unsigned short var_17 = (unsigned short)17216;
int zero = 0;
long long int var_19 = -3583069921086050434LL;
signed char var_20 = (signed char)107;
void init() {
}

void checksum() {
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
