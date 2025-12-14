#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1366057588;
int var_5 = -1131869857;
unsigned int var_13 = 483706191U;
short var_18 = (short)22432;
int zero = 0;
unsigned short var_19 = (unsigned short)57800;
int var_20 = -1376131664;
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
