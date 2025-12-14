#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -6073019512474796879LL;
unsigned short var_16 = (unsigned short)12199;
int zero = 0;
long long int var_17 = -7175365889674808104LL;
long long int var_18 = 9045454367975572402LL;
unsigned char var_19 = (unsigned char)115;
void init() {
}

void checksum() {
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
