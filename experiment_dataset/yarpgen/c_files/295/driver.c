#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16349;
int var_2 = -743809402;
short var_7 = (short)-28735;
int zero = 0;
unsigned long long int var_16 = 18145742109406166169ULL;
unsigned int var_17 = 4254757719U;
short var_18 = (short)30902;
void init() {
}

void checksum() {
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
