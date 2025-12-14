#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
unsigned short var_9 = (unsigned short)54914;
int zero = 0;
unsigned short var_14 = (unsigned short)31551;
signed char var_15 = (signed char)-122;
unsigned long long int var_16 = 9915661605801167890ULL;
unsigned short var_17 = (unsigned short)62303;
unsigned int var_18 = 281180271U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
