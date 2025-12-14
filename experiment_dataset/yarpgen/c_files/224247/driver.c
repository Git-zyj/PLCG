#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20732;
short var_5 = (short)12679;
signed char var_7 = (signed char)-14;
signed char var_12 = (signed char)47;
unsigned long long int var_13 = 13147687435910720366ULL;
int zero = 0;
unsigned long long int var_15 = 11513045385714714871ULL;
unsigned short var_16 = (unsigned short)35525;
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
