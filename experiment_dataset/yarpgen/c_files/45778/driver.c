#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49645;
unsigned short var_3 = (unsigned short)20041;
int var_4 = 229734421;
short var_6 = (short)13160;
int var_13 = -1351057451;
int zero = 0;
unsigned long long int var_17 = 2133475348955155226ULL;
unsigned long long int var_18 = 15468017048155149483ULL;
void init() {
}

void checksum() {
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
