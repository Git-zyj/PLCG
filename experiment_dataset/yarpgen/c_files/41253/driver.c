#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16694751743024994572ULL;
long long int var_5 = -1078818291471523221LL;
signed char var_7 = (signed char)-117;
short var_8 = (short)-3051;
int zero = 0;
unsigned short var_13 = (unsigned short)34286;
unsigned long long int var_14 = 12837490586072187801ULL;
short var_15 = (short)24009;
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
