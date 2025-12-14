#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2124363561;
unsigned short var_5 = (unsigned short)48089;
unsigned int var_6 = 1200113950U;
unsigned short var_13 = (unsigned short)31818;
unsigned long long int var_14 = 9624680889483944711ULL;
int zero = 0;
unsigned long long int var_15 = 4196454181418011841ULL;
unsigned long long int var_16 = 7972222674287162725ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
