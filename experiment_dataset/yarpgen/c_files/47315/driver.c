#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)236;
long long int var_5 = 4339381631464797621LL;
unsigned int var_7 = 1559798126U;
long long int var_8 = -578378287100105383LL;
unsigned char var_11 = (unsigned char)28;
int zero = 0;
unsigned char var_19 = (unsigned char)212;
unsigned int var_20 = 2726175123U;
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
